#include <iostream>
#include <vector>
using namespace std;

class Estudiante{
private:
    string nombre,rut;
public:
    Estudiante(string nombre, string rut){
        this->nombre=nombre;
        this->rut=rut;
    }
    string getRut(){
        return rut;
    }
    string getNombre(){
        return nombre;
    }
};
class Ramo{
private:
    string codigo;
    string profesor;
    vector<Estudiante*>vectorsito;
public:
    Ramo(string codigo, string profesor){
        this->codigo=codigo;
        this->profesor=profesor;
    }
    void agregarEstudiante(Estudiante *e){
        vectorsito.push_back(e);
        cout<<"Alumno anadido"<<endl;
    }
    void eliminarEstudiante(Estudiante *e){
        if (vectorsito.empty()){
            cout<<"El vector está vacio"<<endl;
        }else{
            vector<Estudiante*>aux;
            int largo=vectorsito.size();
            for (int i = 0; i < largo; i++) {
                if (vectorsito.back()->getRut()==e->getRut()){
                    vectorsito.pop_back();
                } else{
                    aux.push_back(vectorsito.back());
                    vectorsito.pop_back();
                }
            }
            int final=aux.size();
            if (final==largo){
                cout<<"No se encontro el alumno"<<endl;
            }else{
                cout<<"El alumno fue fusilado"<<endl;
            }
            for (int i = 0; i < final; ++i) {
                vectorsito.push_back(aux.back());
                aux.pop_back();
            }
        }
    }
    void mostrarDetalles(){
        cout<<"Codigo del curso: "<<codigo<<endl<<"Profesor: "<<profesor<<endl;
        if (vectorsito.empty()){
            cout<<"Curso sin estudiantes"<<endl;
        }else{
            int largo=vectorsito.size();
            for (int i = 0; i < largo; ++i) {
                cout<<"Nombre del alumno "<<i+1<<" "<<vectorsito[i]->getNombre()<<endl<<"Y su rut es: "<<vectorsito[i]->getRut()<<endl;
            }
        }
    }
};