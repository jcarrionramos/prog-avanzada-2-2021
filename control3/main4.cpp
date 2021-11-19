#include "iostream"
#include "stack"

using namespace std;

class BStack {
  private:
  string rut;
  stack<int> depositos;

  public:

  BStack(string rut) {
    this->rut = rut;
  }

  bool depositar(int monto){
    if (monto < depositos.top()) {
      return false;
    }

    depositos.push(monto);
    return true;
  }

  int girar(int cantidad) {
    int suma = 0;
    for (int i = 0; i < cantidad; i++) {
      suma = suma + depositos.top();
      depositos.pop();
    }
    return suma;
  }

  int cerrarCuenta() {
    int suma = 0;
    while (!depositos.empty()) {
      suma = suma + depositos.top();
      depositos.pop();
    }
    return suma;
  }
};
