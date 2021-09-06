#include <iostream>
using namespace std;

class Dragon{
private:
    int PS,DPS;
public:
    Dragon(int PS,int DPS){
        this->PS=PS;
        this->DPS=DPS;
    }
    int getPS(){
        return PS;
    }
    int getDPS() {
        return DPS;
    }
    void setPS(int n) {
        PS-=n;
    }
};

void ordenarDragones(Dragon *dragones[],int n){
    bool terminar=false;
    Dragon *aux;
    while(terminar==false){
        terminar=true;
        for(int i=0;i<n-1;++i){
            if(dragones[i]->getPS()>dragones[i+1]->getPS()){
                aux=dragones[i];
                dragones[i]=dragones[i+1];
                dragones[i+1]=aux;
            }
        }
    }
}

void imprimir(Dragon *dragones[],int n){
    for(int i=0;i<n;++i){
        cout<<"PS dragon "<<i+1<<": "<<dragones[i]->getPS()<<endl;
    }
}

float danoRecibido(Dragon *dragones[],int n){
    float suma=0;
    float help=0;
    for (int i = n-1; i >=0; i--){
        if (dragones[i]->getPS()==0){

        }else{
        suma+=(float)(dragones[i]->getDPS());
        help+=suma*(float)(dragones[i]->getPS());
        }
    }
    return help;
}

int main(){
    int n;
    cin>>n;
    Dragon *dragones[n];
    int ps,dps;
    for (int i=0;i<n;++i) {
        cin>>ps>>dps;
        dragones[i]= new Dragon(ps,dps);
    }
    ordenarDragones(dragones,n);
    imprimir(dragones,n);

    int cont=0;
    float sumatotal=0;
    while(dragones[n-1]->getPS()!=0){
        sumatotal+= danoRecibido(dragones,n);
        cout<<"El dano recibido en este turno fue de: "<<danoRecibido(dragones,n)<<endl;
        bool encontrado=false;
        int i=0;
        while(encontrado!=true){
            if (dragones[i]->getPS()!=0){
                dragones[i]->setPS(1);
                encontrado=true;
            }
            i++;
        }
        cont++;
    }
    cout<<endl;
    cout<<"El dano recibido en total por el mago fue de: "<<sumatotal<<endl<<"Le tomo: "<<cont<<" turnos vencer a los dragones";

    return 0;
}

