#include "iostream"
#include "stack"

using namespace std;

// Crear la clase Cola, con los métodos push, pop, empty y front
// usando dos stacks (pilas).

class Cola {
  private:
    stack<int> s1, s2;
  public:
    void push(int x) {
      while(!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
      }

      s1.push(x);

      while(!s2.empty()) {
        s1.push(s2.top());
        s2.pop();
      }
    }

    void pop() {
      s1.pop();
    }

    bool empty() {
     return s1.empty();
    }

    int front() {
      return s1.top();
    }

};

int main() {
  Cola q;

  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);

  while(!q.empty()) {
    cout << q.front() << endl;
    q.pop();
  }

}