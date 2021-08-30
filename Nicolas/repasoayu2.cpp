#include <iostream>
using namespace std;

class Hexaedros{
private:
    int ancho,alto,profundidad;
public:
    Hexaedros(int ancho,int alto,int profundidad){
        this->ancho=ancho;
        this->alto=alto;
        this->profundidad=profundidad;
    }
    void setAncho(int anchor){
        ancho=anchor;
    }
    void setAlto(int altor){
        alto=altor;
    }
    void setProfundidad(int prof){
        profundidad=prof;
    }
    int getAncho(){
        return ancho;
    }
    int getAlto(){
        return alto;
    }
    int getProfundidad(){
        return profundidad;
    }
    int calcularVolumen(){
        return ancho*alto*profundidad;
    }
    void imprimir(){
        cout<<"Alto: "<<alto<<endl<<"Ancho: "<<ancho<<endl<<"Profundidad: "<<profundidad<<endl;
    }
};

int main(){

    int ancho,alto,profundidad;
    cin>>alto>>ancho>>profundidad;
    Hexaedros *cuerpo= new Hexaedros(alto,ancho,profundidad);

    cuerpo->imprimir();

    cout<<"El volumen es: "<<cuerpo->calcularVolumen();

    return 0;
}