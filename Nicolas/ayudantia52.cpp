#include <iostream>
using namespace std;

class Jugador{
private:
    string nombre;
    float vida,ataque;
public:
    Jugador(string nombre,float vida,float ataque){
        this->nombre=nombre;
        this->vida=vida;
        this->ataque=ataque;
    }
    void setNombre(string nombre){
        this->nombre=nombre;
    }
    void setVida(float vida){
        this->vida=vida;
    }
    void setAtaque(float ataque){
        this->ataque=ataque;
    }
    string getNombre(){
        return nombre;
    }
    float getVida(){
        return vida;
    }
    float getAtaque(){
        return ataque;
    }
};

class Mago: public Jugador{
private:
    string tipo;
public:
    Mago(string nombre,string tipo): Jugador(nombre,200,100){
        this->tipo=tipo;
    }
    string getTipo(){
        return tipo;
    }
    void setTipo(string tipo){
        this->tipo=tipo;
    }
};

class Guerrero: public Jugador {
private:
    string pais;
public:
    Guerrero(string nombre, string pais) : Jugador(nombre, 150, 200){
        this->pais = pais;
    }
    string getPais() {
        return pais;
    }
    void setPais(string pais){
        this->pais=pais;
    }
};

int main(){
    string nombre,pais;
    cin>>nombre>>pais;
    Guerrero *gue=new Guerrero(nombre,pais);
    cout<<"Nombre: "<<gue->getNombre()<<endl<<"Pais de guerrero: "<<gue->getPais()<<endl<<"Vida: "<<gue->getVida()<<endl<<"Ataque: "<<gue->getAtaque();
    return 0;
}