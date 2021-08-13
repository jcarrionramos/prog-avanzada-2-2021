#include "iostream"

using namespace std;

int plusTwoNumbers(int a, int b) {
  int c = a + b;
  return c;
}

void sayHelloWorld(string lang) {

  if (lang == "es") {
    cout << "Hola Mundo!" << endl;
    return;
  }

  cout << "Hello World!" << endl;
}

int main() {
  // int lolo = 1;
  // int lala = plusTwoNumbers(lolo, 1);
  // cout << "La suma es: "<< lala << endl;

  sayHelloWorld("fr");
}
