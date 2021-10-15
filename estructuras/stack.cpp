#include "iostream"
#include "stack"

using namespace std;

int main() {
  stack<int> s;

  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);
  s.push(5);

  while(!s.empty()) {
    cout << s.top() << ". El tamanio es es: " << s.size() << endl;
    s.pop();
  }

}