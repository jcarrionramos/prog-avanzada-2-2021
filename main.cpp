#include "iostream"

using namespace std;

void giveBack(int amount, int tickets[]) {
  cout << "Inicio del vuelto " << amount << endl;

  for (int i = 0; i < 7; i++) {
    if (amount / tickets[i] > 0) {
      cout << amount / tickets[i] << " billete de " << tickets[i] << endl;
      amount = amount % tickets[i]; 
    }
  }

  cout << endl;
}

int main() {
  int tickets[] = { 20000, 10000, 5000, 2000, 1000, 500, 100, 50, 10, 5, 1 };
  giveBack(15000, tickets);
  giveBack(3000, tickets);
  giveBack(2000, tickets);
}