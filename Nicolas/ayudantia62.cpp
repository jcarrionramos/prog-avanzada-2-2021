#include <iostream>
using namespace std;

class Vehiculo{
private:
    float rendimiento;
public:
    Vehiculo(float rendimiento){
        this->rendimiento=rendimiento;
    }
};
class Auto{
private:
    float potencia;
    bool fourx;
public:
    Auto(float potencia,bool fourx){
        this->potencia=potencia;
        this->fourx=fourx;
    }
};
class Moto{
private:
    float  potencia;
    float estabilidad;
public:
    Moto(float potencia,float estabilidad){
        this->potencia=potencia;
        this->estabilidad=estabilidad;
    }
};
class Avion{
private:
    float potencia,anios;
public:
    Avion(float potencia,float anios){
        this->potencia=potencia;
        this->anios=anios;
    }
};
class Mercedes: public Vehiculo, public Auto{
private:
    float robado;
public:
    Mercedes(float rendimiento, float potencia, bool fourx, float robado): Vehiculo(rendimiento), Auto(potencia,fourx){
        this->robado=robado;
    }
};
class Yamaha: public Vehiculo, public Moto{
private:
    float fixa;
public:
    Yamaha(float rendimiento,float potencia,float estabilidad,float fixa): Vehiculo(rendimiento), Moto(potencia,estabilidad){
        this->fixa=fixa;
    }
};
class Boeing: public Vehiculo,public Avion{
private:
    float maxpeso;
public:
    Boeing(float rendimiento,float potencia,float anios,float maxpeso): Vehiculo(rendimiento), Avion(potencia,anios){
        this->maxpeso=maxpeso;
    }
};

int main(){
    return 0;
}