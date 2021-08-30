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
    void getPelicula(int ind){
        cout<<"Nombre pelicula"<<ind+1<<": "<<peliculas[ind]->getNombre()<<endl;
        cout<<"Ano lanzamiento pelicula"<<ind+1<<": "<<peliculas[ind]->getLanza()<<endl;
    }
    void setPelicula(string nombre,int lanza,int ind){
        peliculas[ind]->setNombre(nombre);
        peliculas[ind]->setLanza(lanza);
    }
    void setNombre(string nombre){
        this->nombre=nombre;
    }
};

int main(){

    string saga;
    cin>>saga;
    Saga *sag=new Saga(saga);


    return 0;
}
