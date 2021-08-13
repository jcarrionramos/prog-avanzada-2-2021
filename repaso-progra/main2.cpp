#include "iostream"

using namespace std;

int main() {
  int amount = 15000;
  int tickets[] = { 20000, 10000, 5000, 2000, 1000, 500, 100, 50, 1 };

  for (int i = 0; i < 9; i++) {
    if (amount / tickets[i] > 0) {
      cout << amount / tickets[i] << " de " << tickets[i] << endl;
      amount = amount % tickets[i];
    }     
  }
}