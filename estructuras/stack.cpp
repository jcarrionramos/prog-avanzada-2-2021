#include "iostream"
#include "stack"
#include "vector"

using namespace std;

class Pair {
  public:
  int first;
  int second;

  Pair(int first, int second) : first(first), second(second) {
  }
};

class PairChild : public Pair {
  public:
  PairChild(int first, int second) : Pair(first, second) {
  }
};

// LIFO = Last In First Out

int main() {
  stack<Pair> s;
  
  s.push(Pair(2,3));
  s.push(PairChild(1,1));

  while(!s.empty()) {
    Pair current = s.top();
    cout << current.first << "," << current.second << ". El tamanio es es: " << s.size() << endl;
    s.pop();
  }

}