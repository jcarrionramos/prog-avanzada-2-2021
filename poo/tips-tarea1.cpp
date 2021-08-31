#include "iostream"

using namespace std;

int* crearArregloTamano3() {
  static int lala[] = { 3, 2, 1 };
  return lala;
}

void ordenar(int* lala) {
  lala[0] = 1;
  lala[1] = 2;
  lala[2] = 3;
}

int main() {
  int* arr = crearArregloTamano3();

  ordenar(arr);

  for (int i = 0; i < 3 ; i ++) {
    cout << arr[i] << endl;
  }
}