#include <iostream>
using namespace std;

class Vehiculo{
private:
    string marca,modelo;
    int ruedas,puertas;
    float rendimiento;
public:
    Vehiculo(string marca,string modelo,int ruedas,int puertas,float rendimiento){
        this->marca=marca;
        this->modelo=modelo;
        this->ruedas=ruedas;
        this->puertas=puertas;
        this->rendimiento=rendimiento;
    }
    float getRendimiento(){
        return rendimiento;
    }
};

class Auto : public Vehiculo{
private:
    int octanaje;
public:
    Auto(string marca,string modelo,int ruedas,int puertas,float rendimiento,int octanaje): Vehiculo(marca,modelo,ruedas,puertas,rendimiento){
        this->octanaje=octanaje;
    }
};

class Avion: public Vehiculo{
private:
    int paradas;
public:
    Avion(string marca,string modelo,int ruedas,int puertas,float rendimiento,int paradas): Vehiculo(marca,modelo,ruedas,puertas,rendimiento){
        this->paradas=paradas;
    }
    int getParadas(){
        return paradas;
    }
};

void medirAuto(Auto *au,float distancia){
    int paradas=(int)(distancia/au->getRendimiento());
    paradas++;
    cout<<"El auto tendra que hacer "<<paradas<<" paradas"<<endl;
}

void medirAvion(Avion *av,float distancia){
    int paradas=(int)(distancia/av->getRendimiento());
    paradas++;
    cout<<"El avion tendra que hacer "<<paradas<<" paradas"<<endl;
    if (paradas>av->getParadas()){
        cout<<"Lo cual es imposible"<<endl;
    }else{
        cout<<"Lo cual es posible"<<endl;
    }
}

int main(){
    string modelo,marca;
    int ruedas,puertas,octanaje,paradas;
    float rendimiento;
    cin>>marca>>modelo>>ruedas>>puertas>>octanaje>>paradas>>rendimiento;
    Auto *au=new Auto(marca,modelo,ruedas,puertas,rendimiento,octanaje);
    Avion *av=new Avion(marca,modelo, ruedas,puertas,rendimiento,paradas);

    float distancia;
    cin>>distancia;

    medirAuto(au,distancia);
    medirAvion(av,distancia);

    return 0;
}