#include <iostream>
using namespace std;

class Supermercado{
private:
    int dia,valor;
public:
    Supermercado(int dia,int valor){
        this->dia=dia;
        this->valor=valor;
    }
    void setDia(int dia){
        this->dia=dia;
    }
    void setValor(int valor){
        this->valor=valor;
    }
    int getDia(){
        return dia;
    }
    int getValor(){
        return valor;
    }
    void imprimir(){
        if (dia==1){
            cout<<"El dia de compra fue el Lunes"<<endl<<"La venta tupo un precio real de "<<valor<<endl;
        }else if(dia==2){
            cout<<"El dia de compra fue el Martes"<<endl<<"La venta tupo un precio real de "<<valor<<endl;
        }else if(dia==3){
            cout<<"El dia de compra fue el Miercoles"<<endl<<"La venta tupo un precio real de "<<valor<<endl;
        }else if(dia==4){
            cout<<"El dia de compra fue el Jueves"<<endl<<"La venta tupo un precio real de "<<valor<<endl;
        }else if(dia==5){
            cout<<"El dia de compra fue el Viernes"<<endl<<"La venta tupo un precio real de "<<valor<<endl;
        }else if(dia==6){
            cout<<"El dia de compra fue el Sabado"<<endl<<"La venta tupo un precio real de "<<valor<<endl;
        }else if(dia==7){
            cout<<"El dia de compra fue el Domingo"<<endl<<"La venta tupo un precio real de "<<valor<<endl;
        }else{
            cout<<"Se ingreso mal el dia"<<endl;
        }
    }
    float descuento(){
        if (dia==1){
            return (float)(valor*0.85);
        }else if(dia==2){
            return (float)(valor*0.9);
        }else if(dia==3){
            return (float)(valor*0.95);
        }else if(dia==4){
            return (float)(valor*0.75);
        }else if(dia==5){
            return (float)(valor*0.88);
        }else if(dia==6){
            return (float)(valor*0.6);
        }else if(dia==7){
            return (float)(valor*0.6);
        }else{
            return -5;
        }
    }
};
int main(){
    int valor,dia;
    cin>>dia>>valor;
    Supermercado *dia1= new Supermercado(dia,valor);
    dia1->imprimir();
    float res=dia1->descuento();
    if (res==-5){
        cout<<"Se ingreso mal el dia, cambian la cajera DEAAA"<<endl;
    }else{
        cout<<"Gracias al descuento, la venta quedo en: "<<res<<endl;
    }

    return 0;
}