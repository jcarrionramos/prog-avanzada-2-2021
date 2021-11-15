#include "iostream"
#include "queue"

using namespace std;

int tiempoTotal(queue<int> actual, queue<int> perfecta) {
  int contador = 0;
  while(!actual.empty()) {
    contador++;
    if (actual.front() == perfecta.front()) {
      actual.pop();
      perfecta.pop();
    } else {
      int temp = actual.front();
      actual.pop();
      actual.push(temp);
    }
  }

  return contador;
}

int main() {
  int N;
  cin >> N;

  queue<int> actual;
  queue<int> perfecta;

  int current;
  for (int i = 0; i <  N; i++) {
    cin >> current;
    actual.push(current);
  }

  for (int i = 0; i <  N; i++) {
    cin >> current;
    perfecta.push(current);
  }


  cout << tiempoTotal(actual, perfecta) << endl;

}