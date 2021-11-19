#include "iostream"
#include "queue"

using namespace std;

int main() {
  queue<int> numeral;
  numeral.push(5);
  numeral.push(25);
  numeral.push(35);
  numeral.push(1);
  numeral.push(8);
  numeral.push(10);

  vector<int> aux;
  while(!numeral.empty()){
    aux.push_back(numeral.front());
    numeral.pop();
  }

  while(!aux.empty()) {
    int minIndex = 0;
    for (int i = 0; i < aux.size(); i++) {
      if(aux[minIndex] > aux[i]) {
        minIndex = i;
      }
    }
    numeral.push(aux[minIndex]);
    aux.erase(aux.begin() + minIndex);
  }

}