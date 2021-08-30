#include <iostream>

using namespace std;

class Cliente{
private:
    string nombre,rut;
    int dinero,deuda;
public:
    Cliente(string nombre,string rut,int dinero,int deuda){
        this->nombre=nombre;
        this->rut=rut;
        this->dinero=dinero;
        this->deuda=deuda;
    }
    string getNombre(){
        return nombre;
    }
    string getRut(){
        return rut;
    }
    int getDinero(){
        return dinero;
    }
    int getDeuda(){
        return deuda;
    }
    void setNombre(string nombrer){
        nombre=nombrer;
    }
    void setRut(string rutr){
        rut=rutr;
    }
    void setDinero(int dinero){
        this->dinero=dinero;
    }
    void setDeuda(int deuda){
        this->deuda=deuda;
    }
    void imprimir(){
        cout<<"Nombre: "<<nombre<<endl<<"Rut: "<<rut<<endl<<"Dinero en cuenta: "<<dinero<<endl<<"Deuda: "<<deuda<<endl;
    }
    bool dicom(){
        if (dinero>=deuda){
            return true;
        }else{
            return false;
        }
    }
};

int main(){

    string nombre,rut;
    int dinero,deuda;

    cin>>nombre>>rut>>dinero>>deuda;
    Cliente *endeudado1= new Cliente(nombre,rut,dinero,deuda);
    endeudado1->imprimir();

    if (endeudado1->dicom()){
        cout<<"La persona podra pagar su deuda"<<endl;
    }else{
        cout<<"La persona no puede pagar F"<<endl;
    }


    return 0;
}