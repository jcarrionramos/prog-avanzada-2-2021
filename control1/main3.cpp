#include "iostream"

using namespace std;

class Imagen {

  public:
    Imagen* nueveImagen(Imagen* imagen1, Imagen* imagen2,Imagen* imagen3) {
      Imagen* nueva;

      int nuevoTamano = imagen1->getTamano() + imagen2->getTamano() + imagen3->getTamano();
      string nuevoNombre = imagen1->getNombre() + imagen2->getNombre() + imagen3->getNombre();

      nueva->setTamano(nuevoTamano);
      nueva->setNombre(nuevoNombre);
      return nueva;
    }

    void setTamano(int t) {
      tamano = t;
    }

    void setNombre(string t) {
      nombre = t;
    }

    string getNombre() {
      return nombre;
    }

    int getTamano() {
      return tamano;
    }
};