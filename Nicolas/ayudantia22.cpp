#include <iostream>
using namespace std;

class Libro{
private:
    string nombre,autor;
    int lanza,precio,stock;
public:
    Libro(string nombre,string autor,int lanza,int precio,int stock){
        this->nombre=nombre;
        this->autor=autor;
        this->lanza=lanza;
        this->precio=precio;
        this->stock=stock;
    }
    void setNombre(string nombre){
        this->nombre=nombre;
    }
    void setAutor(string autor){
        this->autor=autor;
    }
    void setLanza(int lanza){
        this->lanza=lanza;
    }
    void setPrecio(int precio){
        this->precio=precio;
    }
    void setStock(int stock){
        this->stock=stock;
    }
    string getNombre(){
        return nombre;
    }
    string getAutor(){
        return autor;
    }
    int getLanza(){
        return lanza;
    }
    int getPrecio(){
        return precio;
    }
    int getStock(){
        return stock;
    }
    void imprimir(){
        cout<<"Nombre: "<<nombre<<endl<<"Autor: "<<autor<<endl<<"Ano de lanzamiento"<<lanza<<endl<<"Precio: "<<precio<<endl<<"Stock: "<<stock<<endl;
    }
    void stockAumentar(int n){
        cout<<"Stock anterior: "<<stock<<endl;
        stock+=n;
        cout<<"Nuevo stock: "<<stock<<endl;
    }
    void stockDisminuir(int n){
        cout<<"Stock anterior: "<<stock<<endl;
        stock-=n;
        cout<<"Nuevo stock: "<<stock<<endl;
    }
};

int main(){
    string nombre,autor;
    int lanza,precio,stock;
    cin>>nombre>>autor>>lanza>>precio>>stock;
    Libro *libro1 = new Libro(nombre,autor,lanza,precio,stock);
    libro1->imprimir();
    int n;
    cin>>n;
    libro1->stockAumentar(n);
    cin>>n;
    libro1->stockDisminuir(n);
    return 0;
}