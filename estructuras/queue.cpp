#include "iostream"
#include "queue"

using namespace std;

void printQ(queue<int> &q) {
  while(!q.empty()) {
    cout << q.front() << endl;
    q.pop();
  }
}

// FIFO =  First In First Out

int main() {
  queue<int> q;

  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);

  cout << ".size() = " << q.size() << endl;
  cout << ".empty() = " << q.empty() << endl; 
  cout << ".front() = " << q.front() << endl;
  cout << ".back() = " << q.back() << endl;

  printQ(q);
  printQ(q);
  printQ(q);

}