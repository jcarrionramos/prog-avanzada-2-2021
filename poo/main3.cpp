// Clase Vect;
// 3 atributos: size, cap, arr
// push_back(int value) => inserta al final del arreglo;

#include "iostream"

using namespace std;

class Vect {
  private:
    int* arr;
    int size;
    int cap;

    void resize() {
      int newCap = 2 * cap;
      int *newArr = new int[newCap];

      for (int i = 0; i < cap; i++ ) {
        newArr[i] = arr[i];
      }

      cap = newCap;
      arr = newArr;
    }

  public:
    Vect(int capInit = 1) {
      cap = capInit;
      size = 0;
      arr = new int[cap];
    }

    void pushBack(int value) {
      if (size == cap) {
        resize();
      }

      arr[size] = value;
      size++;
    }
};


int main() {
  Vect* v = new Vect(3);

  v->pushBack(1);
  v->pushBack(2);
  v->pushBack(3);
  v->pushBack(4);
  v->pushBack(5);
  v->pushBack(6);
  v->pushBack(7);
  v->pushBack(8);
  v->pushBack(9);

}