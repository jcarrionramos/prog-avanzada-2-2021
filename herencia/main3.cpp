#include "iostream"

using namespace std;

class Complex {
  public:
    int real, imag;

    Complex(int r = 0, int i =0) {
      real = r;
      imag = i;
    }

    Complex operator+ (Complex const &obj) {
      Complex res;
      res.real = real + obj.real;
      res.imag = imag + obj.imag;
      return res;
    }
};

int suma(int a, int b){
  return a + b;
}

int suma(float a, float b) {
  return a + b;
}


int main() {
  int c = suma(1,1);

  float f = 2.2;
  float ff = 2.2;
  float d = suma(f, ff);

  Complex c1(10, 5);
  Complex c2(2, 4);

  Complex c3 = c1 + c2;

 }