#include <iostream>
using namespace std;

class Mamifero{
private:
    string pelaje;
    int patas,dientes;
public:
    Mamifero(string pelaje,int patas,int dientes){
        this->pelaje=pelaje;
        this->patas=patas;
        this->dientes=dientes;
    }
};

class Perro{
    //ladrar y tipo orejas
private:
    string tipooreja;
public:
    Perro(string tipooreja){
        this->tipooreja=tipooreja;
    }
    void Ladrar(){
        cout<<"guau guau"<<endl;
    }
};

class Gato{
    //maullar y color de ojos
private:
    string color;
public:
    Gato(string color){
        this->color=color;
    }
    void Maullar(){
        cout<<"miau miau"<<endl;
    }
};

class CatDog : public Perro, public Gato,public Mamifero{
    //investigador
private:
    string nombre;
public:
    CatDog(string pelaje,int patas,int dientes,string tipooreja,string color): Mamifero(pelaje,patas,dientes), Perro(tipooreja), Gato(color){
        this->nombre=nombre;
    }
};

int main(){
    string pelaje,tipooreja,color;
    int patas,dientes;
    cin>>pelaje>>patas>>dientes>>tipooreja>>color;
    CatDog *prueba=new CatDog(pelaje,patas,dientes,tipooreja,color);
    prueba->Ladrar();
    prueba->Maullar();

    return 0;
}