#include "iostream"
#include "stack"

using namespace std;

int main() {
  stack<int> numeral;
  numeral.push(5);
  numeral.push(25);
  numeral.push(35);
  numeral.push(1);
  numeral.push(8);
  numeral.push(10);

  // Solucion
  stack<int> aux;
  while(numeral.top() != 25) {
    aux.push(numeral.top());
    numeral.pop();
  }

  // elimino el 25
  numeral.pop();

  while(!aux.empty()) {
    numeral.push(aux.top());
    aux.pop();
  }
}