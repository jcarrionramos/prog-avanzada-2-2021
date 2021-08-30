#include <iostream>
using namespace std;

class Estudiante{
private:
    int notas[5];
    string nombre,apellido;
public:
    Estudiante(){}
    void setNota(int n,int indice){
        notas[indice]=n;
    }
    void setNombre(string nombre){
        this->nombre=nombre;
    }
    void setApellido(string apellido){
        this->apellido=apellido;
    }
    void getNotas(){
        for (int i = 0; i < 5; ++i) {
            cout<<"Nota "<<i+1<<": "<<notas[i]<<endl;
        }
    }
    string getNombre(){
        return nombre;
    }
    string getApellido(){
        return apellido;
    }
};

int main(){

    return 0;
}