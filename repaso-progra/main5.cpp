#include "iostream"

using namespace std;

void plusOne(int* a) {
  cout << "Valor de (a) entre 1 " << a << endl;
  
  a = a + 1;

  cout << "Valor de (a) entre 2 " << a << endl;
  cout << "Valor de (a) entre 3 " << *a << endl;
}

int main(){
  int a = 5;

  int* p = &a;
  cout << p << endl;
  cout << &a << endl;
  cout << *p << endl;
  cout << a << endl;

  *p = 10;

  cout << *p << endl;
  cout << a << endl;


  // cout << "Valor de (a) antes " << a << endl;

  // plusOne(&a);

  // cout << "Valor de (a) depues " << a << endl;
}
