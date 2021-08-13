#include "iostream"

using namespace std;

void giveBack(int amount, int tickets[]) {
  for (int i = 0; i < 5; i++) {
    if (amount / tickets[i] > 0) {
      cout << amount / tickets[i] << " de " << tickets[i] << endl;
      amount = amount % tickets[i];
    }     
  }
}

int main() {
  int amount = 15000;
  int ticketsCLP[] = { 20000, 10000, 5000, 2000, 1000 };
  int ticketsUSD[] = { 100, 50, 10, 5, 1 };

  giveBack(amount, ticketsCLP);
  giveBack(1000000, ticketsUSD);
}