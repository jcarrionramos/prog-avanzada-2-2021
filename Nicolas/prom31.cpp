#include <iostream>

using namespace std;

class Personas{
private:
    int id;
    float rut;
    string nombre;
    int dineroCuenta;
    int credito;
public:
    Personas(int idr,float rutr,string nombrer,int dinero,int creditor){
        id=idr;
        rut=rutr;
        nombre=nombrer;
        dineroCuenta=dinero;
        credito=creditor;
    }
    void setId(int id){
        this->id=id;
    }
    void setRut(float rut){
        this->rut=rut;
    }
    void setNombre(string nombre){
        this->nombre=nombre;
    }
    void setDinero(int dineroCuenta){
        this->dineroCuenta=dineroCuenta;
    }
    void setCredito(int credito){
        this->credito=credito;
    }
    int getId(){
        return id;
    }
    float getRut(){
        return rut;
    }
    string getNombre(){
        return nombre;
    }
    int getDinero(){
        return dineroCuenta;
    }
    int getCredito(){
        return credito;
    }
};

int main(){

    int id,dinero,credito;
    string nombre;
    float rut;

    cin>>id>>rut>>nombre>>dinero>>credito;

    Personas *per1 = new Personas(id,rut,nombre,dinero,credito);

    cout<<per1->getId()<<" "<<per1->getRut()<<" "<<per1->getNombre()<<" "<<per1->getDinero()<<" "<<per1->getCredito();
    
    cin>>id>>rut>>nombre>>dinero>>credito;
    
    per1->setId(id);
    per1->setRut(rut);
    per1->setNombre(nombre);
    per1->setDinero(dinero);
    per1->setCredito(credito);

    cout<<per1->getId()<<" "<<per1->getRut()<<" "<<per1->getNombre()<<" "<<per1->getDinero()<<" "<<per1->getCredito();

    return 0;
}