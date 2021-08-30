#include <iostream>
using namespace std;

class Cuenta_Banco
{
private:
    string nombre;
    int numero_cuenta;
    int saldo;

public:
    Cuenta_Banco()
    {
        nombre = "";
        numero_cuenta = 0;
        saldo = 0;
    }
    Cuenta_Banco(string nombre, int numero_cuenta, int saldo)
    {
        this->nombre = nombre;
        this->numero_cuenta = numero_cuenta;
        this->saldo = saldo;
    }
    void setNombre(string nombre)
    {
        this->nombre = nombre;
    }
    void setNumero_cuenta(int numero_cuenta)
    {
        this->numero_cuenta = numero_cuenta;
    }
    void setSaldo(int saldo)
    {
        this->saldo = saldo;
    }
    string getNombre()
    {
        return nombre;
    }
    int getNumero_cuenta()
    {
        return numero_cuenta;
    }
    int getSaldo()
    {
        return saldo;
    }
    void depositar(int cantidad)
    {
        saldo+=cantidad;
        //saldo=saldo+cantidad;
    }
    void retirar(int cantidad)
    {
        saldo-=cantidad;
        //saldo=saldo-cantidad;
    }
    void transferir(Cuenta_Banco *persona2, int cantidad)
    {
        persona2->depositar(cantidad);
        saldo-=cantidad;
    }
    void imprimir(){
        cout<<"Nombre cliente: "<<nombre<<endl<<"Numero de cuenta: "<<numero_cuenta<<endl<<"Saldo: "<<saldo<<endl;
    }
};

int main(){

    Cuenta_Banco *c1= new Cuenta_Banco();
    Cuenta_Banco *c2= new Cuenta_Banco();

    string nombre1,nombre2;
    int cuenta1,cuenta2;
    int saldo1,saldo2;

    cout<<"Ingrese el nombre de la persona 1"<<endl;
    cin>>nombre1;
    cout<<"Ingrese el nombre de la persona 2"<<endl;
    cin>>nombre2>>cuenta1>>cuenta2>>saldo1>>saldo2;

    c1->setNombre(nombre1);
    c1->setNumero_cuenta(cuenta1);
    c1->setSaldo(saldo1);

    c2->setNombre(nombre2);
    c2->setNumero_cuenta(cuenta2);
    c2->setSaldo(saldo2);

    c1->imprimir();
    c2->imprimir();

    c1->depositar(5000);
    c2->retirar(10000);

    c1->imprimir();
    c2->imprimir();

    c2->transferir(c1,50000);

    c1->imprimir();
    c2->imprimir();

    return 0;
}