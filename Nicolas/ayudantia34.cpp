#include <iostream>
using namespace std;

class Mesa
{
private:
    bool estado;
    int gasto;
public:
    Mesa()
    {
        estado=false;
        gasto = 0;
    }
    Mesa(bool estado, int gasto)
    {
        this->estado=estado;
        this->gasto = gasto;
    }
    int getGasto()
    {
        return gasto;
    }
    void setGasto(int gasto)
    {
        this->gasto = gasto;
    }
    bool getEstado(){
        return estado;
    }
    void setEstado(bool estado){
        this->estado=estado;
    }
};

class Restaurante
{
private:
    string nombre;
    Mesa *mesas[10];
public:
    Restaurante(){
        for (int i = 0; i < 10; ++i) {
            mesas[i]=new Mesa();
        }
    }
    Restaurante(string nombre)
    {
        this->nombre = nombre;
        for (int i = 0; i < 10; ++i) {
            mesas[i]=new Mesa();
        }
    }
    string getNombre()
    {
        return nombre;
    }
    void setNombre(string nombre)
    {
        this->nombre = nombre;
    }
    void change(int monto,int ind){
        mesas[ind]->setEstado(true);
        mesas[ind]->setGasto(monto);
        cout<<"Estado de la mesa: "<<mesas[ind]->getEstado()<<endl<<"Monto total en mesa: "<<mesas[ind]->getGasto()<<endl;
    }
    void eliminarMesa(int numero)
    {
        mesas[numero]->setEstado(false);
        mesas[numero]->setGasto(0);
    }
    int mesas_disponibles()
    {
        int cont=0;
        for (int i = 0; i < 10; ++i) {
            if (mesas[i]->getEstado()){}else{
                cont++;
            }
        }
        return cont;
    }
    int mesas_ocupadas()
    {
        int cont=0;
        for (int i = 0; i < 10; ++i) {
            if (mesas[i]->getEstado()){
                cont++;
            }
        }
        return cont;
    }
};

int main()
{
    string nombre;
    cin>>nombre;
    Restaurante *compare=new Restaurante(nombre);

    int numero,monto;
    cin>>numero>>monto;
    compare->change(monto,numero);

    cout<<"Mesas ocupadas: "<<compare->mesas_ocupadas()<<endl<<"Mesas disponibles: "<<compare->mesas_disponibles()<<endl;

    compare->eliminarMesa(numero);
    cout<<"Mesas ocupadas: "<<compare->mesas_ocupadas()<<endl<<"Mesas disponibles: "<<compare->mesas_disponibles()<<endl;

    return 0;
}