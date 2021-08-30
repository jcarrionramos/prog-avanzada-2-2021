#include <iostream>
using namespace std;

class Pelicula{
private:
    string nombre;
    int lanza;
public:
    Pelicula(){}
    void setNombre(string nombre){
        this->nombre=nombre;
    }
    void setLanza(int lanza){
        this->lanza=lanza;
    }
    string getNombre(){
        return nombre;
    }
    int getLanza(){
        return lanza;
    }
};

class Saga{
private:
    string nombre;
    Pelicula *peliculas[5];
public:
    Saga(string nombre){
        this->nombre=nombre;
        for (int i = 0; i < 5; ++i) {
            peliculas[i]=new Pelicula();
        }
    }
    string getNombre(){
        return nombre;
    }
    void setNombre(string nombre){
        this->nombre=nombre;
    }
    void getPelicula(int ind){
        cout<<"Nombre pelicula "<<ind+1<<": "<<peliculas[ind]->getNombre()<<endl;
        cout<<"Ano lanzamiento pelicula "<<ind+1<<": "<<peliculas[ind]->getLanza()<<endl;
    }
    void setPelicula(string nombre,int lanza,int ind){
        peliculas[ind]->setNombre(nombre);
        peliculas[ind]->setLanza(lanza);
    }
};

int main(){

    string saga;
    cin>>saga;
    Saga *sag=new Saga(saga);

    string nombre;
    int lanza;
    for (int i = 0; i < 5; ++i) {
        cin>>nombre>>lanza;
        sag->setPelicula(nombre,lanza,i);
        sag->getPelicula(i);
    }

    return 0;
}
