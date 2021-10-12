#include "iostream"

using namespace std;

class Componente {
  protected:
    int tiempo;
    int costo;
  
  public:
    Componente(int _tiempo, int _costo) {
      tiempo = _tiempo;
      costo = _costo;
    }

    int getCosto() {
      return costo;
    }
};

class Chip : public Componente {
  protected:
    int id;
  public:
    Chip(int _tiempo, int _costo, int _id) : Componente(_tiempo, _costo) {
      id = _id;
    }
};

class TarjetaMemoria : public Componente {
  protected:
    int capacidad;
    string modelo;
  public:
    TarjetaMemoria(int _tiempo, int _costo, int _capacidad, string _modelo) : Componente(_tiempo,_costo) {
      capacidad = _capacidad;
      modelo = _modelo;
    }
};

class ChipPequeno : public Chip {
  protected:
    int tamano;
  
  public:
    ChipPequeno(int _tiempo, int _costo, int _id, int _tamano) : Chip(_tiempo, _costo, _id) {
      tamano = _tamano;
    }
};

class ChipGrande : public Chip {
  protected:
    int peso;
  
  public:
    ChipGrande(int _tiempo, int _costo, int _id, int _peso) : Chip(_tiempo, _costo, _id) {
      peso = _peso;
    }
};

class ComponenteAvanzado {
  private:
    TarjetaMemoria tarjeta;
    ChipPequeno chipP1;
    ChipPequeno chipP2;
    ChipGrande chipG1;
    ChipGrande chipG2;

  public:
    ComponenteAvanzado(TarjetaMemoria _tm, ChipPequeno _cp1, ChipPequeno _cp2, ChipGrande _cg1, ChipGrande _cg2) {
      tarjeta = _tm;
      chipP1 = _cp1;
      chipP2 = _cp2;
      chipG1 = _cg1;
      chipG2 = _cg2;
    }

    int costo() {
      Componente temp[] = { tarjeta, chipP1, chipP2, chipG1, chipG2 };
      return costoTotal(temp, 5);
    }
};


int costoTotal(Componente A[], int size) {
  int total = 0;

  for (int i = 0; i < size; i++) {
    total = total + A[i].getCosto();
  }

  return total;

}