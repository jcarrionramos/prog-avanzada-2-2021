#include <iostream>
#include <vector>
#include <queue>
#include <map>
using namespace std;

class Atencion{
private:
    int fecha;
    string sintomas;
    string diagnostico;
public:
    Atencion(int fecha, string sintomas){
        this->fecha=fecha;
        this->sintomas=sintomas;
        diagnostico="NULL";
    }void setFecha(int fecha){
        this->fecha=fecha;
    }void setSintomas(string sintomas){
        this->sintomas=sintomas;
    }void setDiagnostico(string diagnostico){
        this->diagnostico=diagnostico;
    }int getFecha(){
        return fecha;
    }string getSintomas(){
        return sintomas;
    }string getDiagnostico(){
        return diagnostico;
    }
};

class Paciente{
private:
    string rut,nombre,apellidop,apellidom;
    int fechanacimiento;
    vector<Atencion*>fichaMedica;
public:
    Paciente(string rut, string nombre,string apellidop, string apellidom, int fechanacimiento){
        this->rut=rut;
        this->nombre=nombre;
        this->apellidom=apellidom;
        this->apellidop=apellidop;
        this->fechanacimiento=fechanacimiento;
    }
    void setRut(string rut){
        this->rut=rut;
    }
    void setNombre(string nombre){
        this->nombre=nombre;
    }
    void setApellidoMat(string apellidom){
        this->apellidom=apellidom;
    }
    void setApellidoPat(string apellidop){
        this->apellidop=apellidop;
    }
    void setFecha(int fechanacimiento){
        //Formato: DDMMAAAA
        this->fechanacimiento=fechanacimiento;
    }
    void setNuevaAtencion(string sintoma,int fecha){
        fichaMedica.push_back(new Atencion(fecha,sintoma));
    }
    void setDiagnostico(string diagnostico){
        fichaMedica.back()->setDiagnostico(diagnostico);
    }
    string getRut(){
        return rut;
    }
    string getNombre(){
        return nombre;
    }
    string getApellidoP(){
        return apellidop;
    }
    string getApellidoM(){
        return apellidom;
    }
    int getFechaNacimiento(){
        return fechanacimiento;
    }
    void getAtenciones(){
        for (int i = 0; i < fichaMedica.size(); ++i) {
            cout<<"Fecha de consulta: "<<fichaMedica[i]->getFecha()<<endl
            <<"Sintoma: "<<fichaMedica[i]->getSintomas()<<endl;
            if (fichaMedica[i]->getDiagnostico()=="NULL"){
                cout<<"Aun no cuenta con diagnostico"<<endl;
            }else{
                cout<<"Diagnostico: "<<fichaMedica[i]->getDiagnostico()<<endl;
            }
        }
    }
};

class Hospital{
private:
    map<string,Paciente*>Clientes;
    Paciente *BOX[50];
public:
    Hospital(){
        for(int i=0;i<50;++i){
            BOX[i]=NULL;
        }
    }
    int setBox(Paciente *nuevo){
        for (int i = 0; i < 50; ++i) {
            if (BOX[i]==NULL){
                BOX[i]=nuevo;
                cout<<nuevo->getNombre()<<" "<<nuevo->getApellidoP()<<" "<<nuevo->getApellidoM()<<endl;
                return i;
            }
        }
        return -5;

    }
    void imprimir(){
        //void sirve para imprimir (cout) o int y retornar el total de box
        int contador=0;
        for(int i=0; i<50;i++) {
            if(BOX[i]==NULL){
                contador++;
            }
        }
        cout << "La cantidad de box disponibles el día de hoy es de: "<<contador<<endl;
    }
    bool verificarRut(string rut){
        map<string,Paciente*>::iterator itr;
        itr=Clientes.find(rut);
        if (itr==Clientes.end()){
            return false;
        }else{
            return true;
        }
    }
    Paciente *getPersona(string rut){
        map<string,Paciente*>::iterator itr;
        itr=Clientes.find(rut);
        return itr->second;
    }
    void agregarUsuario(string rut,Paciente *agregar){
        Clientes.insert({rut,agregar});
    }
    void liberarBox(int box,string diagnostico){
        BOX[box-1]->setDiagnostico(diagnostico);
        BOX[box-1]=NULL;
    }
    void preguntarDatos(int box){
        int real=box-1;
        if (BOX[real]==NULL){
            cout<<"BOX vacio"<<endl;
        }else {
            cout << "Nombre del paciente: " << BOX[real]->getNombre() << endl
                 << "Apellido Paterno: " << BOX[real]->getApellidoP() << endl
                 << "Apellido Materno: " << BOX[real]->getApellidoM() << endl
                 << "RUT: " << BOX[real]->getRut() << endl
                 << "Su fecha de nacimiento: " << BOX[real]->getFechaNacimiento() << endl;
            BOX[real]->getAtenciones();
        }

    }
};

int main(){
    int opcion=5;
    queue<Paciente*>filaEspera;
    Hospital *Piego=new Hospital();
    string sintoma[50];
    for (int i = 0; i < 50; ++i) {
        sintoma[i]="NULL";
    }
    cout << "Bienvenido al Hospital Piego Dortales" << endl;
    while(true) {//while true ya que no existe opcion para terminar menú
        cout<<"Ingrese 1 para encolar paciente"<<endl
            <<"Ingrese 2 para ingresar paciente a box"<<endl
            <<"Ingrese 3 para ingresar paciente urgente"<<endl
            <<"Ingrese 4 para dar paciente de alta"<<endl
            <<"Ingrese 5 para imprimir ficha medica del paciente"<<endl
            <<"Ingrese 6 para ver los box disponibles"<<endl;
        cin>>opcion;
        if (opcion==1) {
            string rutPaciente;
            cout << "Ingrese rut del cliente" << endl;
            cin >> rutPaciente;
            if (Piego->verificarRut(rutPaciente)) {
                Paciente *cola = Piego->getPersona(rutPaciente);
                filaEspera.push(cola);
            } else {
                string nombre, apellidop, apellidom;
                int fechanacimiento;//DDMMAAAA
                cout<<"Ingrese nombre"<<endl;
                cin>>nombre;
                cout<<"Ingrese Apellido Paterno"<<endl;
                cin>>apellidop;
                cout<<"Ingrese Apellido Materno"<<endl;
                cin>>apellidom;
                cout<<"Ingrese Fecha de Nacimiento (Formato DDMMAAAA)"<<endl;
                cin>>fechanacimiento;
                Paciente *cola = new Paciente(rutPaciente, nombre, apellidop, apellidom, fechanacimiento);
                Piego->agregarUsuario(rutPaciente, cola);
                filaEspera.push(cola);
            }
            cout << "Ingrese sintoma del paciente" << endl;
            string sintoma;
            cin>>sintoma;
            int fecha;
            cout<<"Ingrese la fecha de hoy (Formato: DDMMAAAA)"<<endl;
            cin>>fecha;
            filaEspera.front()->setNuevaAtencion(sintoma,fecha);
        }else if(opcion==2){
            int box=Piego->setBox(filaEspera.front());
            if (box==-5){
                cout<<"No hay box disponible"<<endl;
            }else{
                cout<<"Paciente ingresado al box "<<box+1<<endl;
            }
        }else if(opcion==3){
            cout<<"Ingrese rut de cliente critico"<<endl;
            string critico;
            cin>>critico;
            int inicial=filaEspera.size();
            queue<Paciente *>aux;
            for (int i = 0; i < inicial; ++i) {
                if (filaEspera.front()->getRut()==critico){
                    bool box=Piego->setBox(filaEspera.front());
                    if (box){
                        filaEspera.pop();
                    }else{
                        cout<<"No hay box disponible"<<endl;
                        aux.push(filaEspera.front());
                        filaEspera.pop();
                    }
                }else{
                    aux.push(filaEspera.front());
                    filaEspera.pop();
                }
            }
        }else if(opcion==4) {
            cout << "Ingresa numero de box a liberar" << endl;
            int box;
            cin>>box;
            cout<<"Ingresa diagnostico"<<endl;
            string diagnostico;
            cin>>diagnostico;
            Piego->liberarBox(box,diagnostico);
        }else if(opcion==5){
            cout<<"Ingrese el numero de Box por preguntar"<<endl;
            int box;
            cin>>box;
            Piego->preguntarDatos(box);
        }else if(opcion==6){
            Piego->imprimir();
        }else{
            cout<<"La opción ingresada no es válida"<<endl;
        }

    }


    return 0;
}
