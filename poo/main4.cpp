// Crear clase Objeto : {
//   nombre: string,
//   cantidad: int,
//   getter y setter
// }
//
// Crear clase ListDeObjetos: {
//   size: int;
//   stock: arreglo de Objecto de tamaño [20]
//   pushBack: metodo que recibe como parametro un Objeto y lo agrega al arreglo stock
// }

#include "iostream"

using namespace std;

class Objeto {
  private:
    string nombre;
    int cantidad;

  public:
    Objeto() {
    }

    Objeto(string nombre_, int cantidad_) {
      nombre = nombre_;
      cantidad =  cantidad_;
    }

    string getNombre() {
      return nombre;
    }

    int getCantidad() {
      return cantidad;
    }
};


class ListaDeObjetos {
  private:
    int size;
    Objeto* stock;

  public:
    ListaDeObjetos() {
      size = 0;
      stock = new Objeto[20];
    }

    bool isFull() {
      return size == 20;
    }

    void pushBack(Objeto nuevoObjeto) {
      if (isFull()) {
        return;
      }

      stock[size] = nuevoObjeto;
      size++;
    }

    void print() {
      for(int i =0; i < 20; i++) {
        cout << stock[i].getNombre() << " - " << stock[i].getCantidad() << endl;
      }
    }
};



