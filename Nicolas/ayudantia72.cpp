#include <iostream>
using namespace std;

class Auto{
private:
    string patente;
    int anio;
public:
    Auto(string patente,int anio){
        this->patente=patente;
        this->anio=anio;
    }
    virtual void Sonido(){
        cout<<"Bip Bip"<<endl;
    }
};
class Supra: public Auto{
private:
    int turbos;
public:
    Supra(string patente,int anio,int turbos): Auto(patente,anio){
        this->turbos=turbos;
    }
    void Sonido(){
        cout<<"Sutututu"<<endl;
    }
};
class Dodge: public Auto{
private:
    float persecucion;
public:
    Dodge(string patente,int anio, float persecucion): Auto(patente,anio){
        this->persecucion=persecucion;
    }
    void Sonido(){
        cout<<"WIWUWIWUWIWU"<<endl;
    }
};
class Camaro: public Auto{
private:
    int caballos;
public:
    Camaro(string patente, int anio, int caballos): Auto(patente,anio){
        this->caballos=caballos;
    }
    void Sonido(){
        cout<<"CHATATATA"<<endl;
    }
};
int main(){

    string patente="SH-AD-56";
    int anio=2018;

    Auto *arr[4];
    arr[0]=new Auto(patente,anio);
    arr[1]=new Supra(patente,anio,3);
    arr[2]=new Camaro(patente,anio,890);
    arr[3]=new Dodge(patente,anio,89);

    arr[0]->Sonido();
    arr[1]->Sonido();
    arr[2]->Sonido();
    arr[3]->Sonido();

    return 0;
}