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
    void pares() {
        int par=0;
        int impar=0;
        for (int i = 0; i < 5; ++i) {
            if (notas[i]%2==0){
                par++;
            }else{
                impar++;
            }
        }
        cout<<"Notas pares: "<<par<<endl<<"Notas impares: "<<impar<<endl;
    }
    float promedio(){
        float suma=0;
        for (int i = 0; i < 5; ++i) {
            suma+=(float)notas[i];
        }
        return suma/5;
    }
};

bool Pasa(float nota){
    if (nota>=40){
        return true;
    }else{
        return false;
    }
}

int main(){

    Estudiante *est=new Estudiante();
    int nota;
    for (int i = 0; i < 5; ++i) {
        cin>>nota;
        est->setNota(nota,i);
    }
    est->getNotas();
    string apellido,nombre;
    cin>>nombre>>apellido;
    est->setNombre(nombre);
    est->setApellido(apellido);
    cout<<"Nombre: "<<est->getNombre()<<endl<<"Apellido: "<<est->getApellido()<<endl;

    if (Pasa(est->promedio())==true){
        cout<<"El estudiante pasa de curso"<<endl;
    }else{
        cout<<"El estudiante no pasa de curso"<<endl;
    }

    return 0;
}