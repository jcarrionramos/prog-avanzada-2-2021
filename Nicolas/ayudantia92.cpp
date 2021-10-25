#include <iostream>
#include <queue>
using namespace std;

class Producto{
private:
    string sku,codigo,vencimiento,nombre;
    int precio;
public:
    Producto(string sku,string codigo, string vencimiento,string nombre,int precio){
        this->sku=sku;
        this->codigo=codigo;
        this->vencimiento=vencimiento;
        this->nombre=nombre;
        this->precio=precio;
    }
    int getPrecio(){
        return precio;
    }
    string getVencimiento(){
        return vencimiento;
    }
};

int main(){

    queue<Producto*>paracetamol;
    queue<Producto*>ibuprofeno;
    queue<Producto*>imecol;

    int opcion=0,merma=0;
    float ventatot=0;
    while (opcion!=4){
        cout<<"Ingrese 1 si quiere vender"<<endl
        <<"Ingrese 2 si quiere declarar merma"<<endl
        <<"Ingrese 3 si quiere ingresar mercaderia"<<endl<<
        "Ingrese 4 para terminar programa"<<endl;
        cin>>opcion;

        if (opcion==1){
            cout<<"Ingrese 1 si quiere vender paracetamol"<<endl<<
            "Ingrese 2 si quiere vender ibuprofeno"<<endl<<
            "Ingrese 3 si quiere vender imecol"<<endl;
            int prod;
            cin>>prod;
            if(prod==1){
                if (paracetamol.empty()){
                    cout<<"No hay existencias de paracetamol"<<endl;
                }else{
                    cout<<"Venta existosa"<<endl;
                    ventatot+=paracetamol.front()->getPrecio();
                    paracetamol.pop();
                }

            }else if(prod==2){
                if (ibuprofeno.empty()){
                    cout<<"No hay existencias de ibuprofeno"<<endl;
                }else{
                    cout<<"Venta existosa"<<endl;
                    ventatot+=ibuprofeno.front()->getPrecio();
                    ibuprofeno.pop();
                }

            }else if(prod==3){
                if (imecol.empty()){
                    cout<<"No hay existencias de imecol"<<endl;
                }else{
                    cout<<"Venta existosa"<<endl;
                    ventatot+=imecol.front()->getPrecio();
                    imecol.pop();
                }
            }

        }else if(opcion==2){
            cout<<"Ingrese 1 si quiere botar paracetamol"<<endl<<
                "Ingrese 2 si quiere botar ibuprofeno"<<endl<<
                "Ingrese 3 si quiere botar imecol"<<endl;
            int prod;
            cin>>prod;

            if(prod==1){
                string fechaa=paracetamol.front()->getVencimiento();
                bool termino=0;
                cout<<paracetamol.size()<<endl;
                int ini=paracetamol.size();
                while (!termino){
                    if (paracetamol.front()->getVencimiento()!=fechaa){
                        termino=1;
                    }else{
                        paracetamol.pop();
                    }
                }
                cout<<paracetamol.size()<<endl;
                int fin=paracetamol.size();
                merma+=(ini-fin);

            }else if(prod==2){
                string fechaa=ibuprofeno.front()->getVencimiento();
                bool termino=0;
                cout<<ibuprofeno.size()<<endl;
                int ini=ibuprofeno.size();
                while (!termino){
                    if (ibuprofeno.front()->getVencimiento()!=fechaa){
                        termino=1;
                    }else{
                        ibuprofeno.pop();
                    }
                }
                cout<<ibuprofeno.size()<<endl;
                int fin=ibuprofeno.size();
                merma+=(ini-fin);

            }else if(prod==3){
                string fechaa=imecol.front()->getVencimiento();
                bool termino=0;
                cout<<imecol.size()<<endl;
                int ini=imecol.size();
                while (!termino){
                    if (imecol.front()->getVencimiento()!=fechaa){
                        termino=1;
                    }else{
                        imecol.pop();
                    }
                }
                cout<<imecol.size()<<endl;
                int fin=imecol.size();
                merma+=(ini-fin);
            }

        }else if(opcion==3){
            cout<<"Ingrese 1 si quiere ingresar paracetamol"<<endl<<
                "Ingrese 2 si quiere ingresar ibuprofeno"<<endl<<
                "Ingrese 3 si quiere ingresar imecol"<<endl;
            int prod;
            cin>>prod;

            cout<<"Ingrese cuantos productos ingresara"<<endl;
            int cantr;
            cin>>cantr;
            cout<<"Ingrese la fecha de vencimiento (Formato: 01/01/01)"<<endl;
            string fecha;
            cin>>fecha;

            if(prod==1){
                Producto *para=new Producto("asda","01A",fecha,"Paracetamol",1000);
                for (int i = 0; i < cantr; ++i) {
                    paracetamol.push(para);
                }
            }else if(prod==2){
                Producto *para=new Producto("sda","02U",fecha,"Ibuprofeno",1200);
                for (int i = 0; i < cantr; ++i) {
                    ibuprofeno.push(para);
                }
            }else if(prod==3){
                Producto *para=new Producto("dsa","09C",fecha,"Imecol",3600);
                for (int i = 0; i < cantr; ++i) {
                    imecol.push(para);
                }
            }

        }else if(opcion==4){

        }else{
            cout<<"Opcion invalida"<<endl;
        }
    }
    cout<<"Se botaron "<<merma<<" productos"<<endl;
    cout<<"La venta total en el dia fue de "<<ventatot<<endl;


    return 0;
}