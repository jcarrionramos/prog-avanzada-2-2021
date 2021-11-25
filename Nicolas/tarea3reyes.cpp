#include <iostream>
#include <stack>
#include <queue>
#include <vector>
using namespace std;

class Sospechoso {
private:
    string nombre;
    int edad,puntaje;
public:
    Sospechoso(string nombre,int edad,int puntaje){
        this->nombre=nombre;
        this->edad=edad;
        this->puntaje=puntaje;
    }
    void setNombre(string nombre){
        this->nombre=nombre;
    }
    void setEdad(int edad){
        this->edad=edad;
    }
    void setPuntaje(int puntaje){
        this->puntaje=puntaje;
    }
    string getNombre(){
        return nombre;
    }
    int getEdad(){
        return edad;
    }
    int getPuntaje(){
        return puntaje;
    }
};

queue<int> cola_ordenar(vector<Sospechoso*>v){
    vector<Sospechoso*>aux;
    queue<int>retornar;
    for (int i = 0; i < v.size(); ++i) {
        aux.push_back(v[i]);
    }
    for (int i = 0; i <10 ; i++) {
        int use=aux[i]->getPuntaje();
        if (use<=40){
            if (use%2==0){
                use=use/2;
            }else{
                use=(use/2)+50;
            }
            aux[i]->setPuntaje(use);
        }else{
            use=use+18;
            aux[i]->setPuntaje(use);
        }
    }
    bool termino=false;
    while(!termino){
        termino=true;
        for (int i = 0; i < v.size()-1; ++i) {
            if (aux[i]->getPuntaje()>aux[i+1]->getPuntaje()){
                termino=false;
                Sospechoso *res=aux[i];
                aux[i]=aux[i+1];
                aux[i+1]=res;
            }
        }
    }
    for (int i = aux.size()-1; i >=0; i--) {
        retornar.push(aux[i]->getPuntaje());
    }
    return retornar;
}

stack<int> pila_ordenar(vector <Sospechoso*>v){
    vector<Sospechoso*>aux;
    stack<int>retornar;
    for (int i = 0; i < v.size(); ++i) {
        aux.push_back(v[i]);
    }
    bool termino=false;
    while(!termino){
        termino=true;
        for (int i = 0; i < v.size()-1; ++i) {
            if (aux[i]->getEdad()>aux[i+1]->getEdad()){
                termino=false;
                Sospechoso *res=aux[i];
                aux[i]=aux[i+1];
                aux[i+1]=res;
            }
        }
    }
    for (int i = 0; i <aux.size() ; ++i) {
        retornar.push(aux[i]->getEdad());
    }
    return retornar;
}

vector<int> diez_fibonacci(){
    vector<int> retornar;
    retornar.push_back(0);
    retornar.push_back(1);
    for (int i = 2; i < 10; ++i) {
        retornar.push_back(retornar[i-2]+ retornar[i-1]);
    }
    return retornar;
}

vector<int> numeros_finales(queue<int> cola_puntajes, stack<int>pila_edades, vector<int> fibonacci){
    vector<int> retornar;
    for (int i = 0; i < 10; ++i) {
        retornar.push_back(cola_puntajes.front()+pila_edades.top()+fibonacci.back());
        cola_puntajes.pop();
        pila_edades.pop();
        fibonacci.pop_back();
    }
    return retornar;
}
void culpable (vector<int> numeros_finales, vector<Sospechoso*>v){
    bool resultado=false;
    for (int i = 0; i < 10; ++i) {
        if (numeros_finales[i]==65){
            resultado= true;
            cout<<v[i]->getNombre()<<endl;
        }
    }
    if (resultado==false){
        cout<<"No se encontro culpable"<<endl;
    }
}

int main(){

    vector<Sospechoso*> sospechosos;
    sospechosos.push_back(new Sospechoso("SethRogen",39,17));
    sospechosos.push_back(new Sospechoso("CesarHuispe",36,93));//Aguante el CriticasQLS
    sospechosos.push_back(new Sospechoso("JamesFranco",43,32));
    sospechosos.push_back(new Sospechoso("WillSmith",53,33));
    sospechosos.push_back(new Sospechoso("JaimeNaranjo",70,77));
    sospechosos.push_back(new Sospechoso("BrunoDiaz",41,27));
    sospechosos.push_back(new Sospechoso("FrankCastle",50,23));
    sospechosos.push_back(new Sospechoso("ZaloReyes",69,86));
    sospechosos.push_back(new Sospechoso("RicardoMeruane",64,67));
    sospechosos.push_back(new Sospechoso("MartinScorsese",78,82));

    queue<int>uno=cola_ordenar(sospechosos);
    stack<int>dos= pila_ordenar(sospechosos);
    vector<int>tres = diez_fibonacci();
    vector<int> finales= numeros_finales(uno,dos,tres);
    culpable(finales,sospechosos);


    return 0;
}