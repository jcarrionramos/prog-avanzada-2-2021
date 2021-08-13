#include "iostream"

using namespace std;

int main() {
  int amount = 25000;

  if (amount / 20000 > 0) {
    cout << amount / 20000 << " de 20k" << endl;
    amount = amount % 20000;
  }

  if (amount / 10000 > 0) {
    cout << amount / 10000 << " de 10k" << endl;
    amount = amount % 10000;
  } 

  if (amount / 5000 > 0) {
    cout << amount / 5000 << " de 5k" << endl;
    amount = amount % 5000;
  }
  
  if (amount / 2000 > 0) {
    cout << amount / 2000 << " de 2k" << endl;
    amount = amount % 2000;
  }
  
  if (amount / 1000 > 0) {
    cout << amount / 1000 << " de 1k" << endl;
    amount = amount % 1000;
  }

  if (amount / 500 > 0) {
    cout << amount / 500 << " de 500" << endl;
    amount = amount % 500;
  }
}