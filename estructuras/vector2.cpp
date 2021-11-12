#include "iostream"
#include "vector"
#include "queue"

using namespace std;

// Creando la clase Queue usando un vector como base.
// FIFO (First In first Out)
class Queue {
  private:
    vector<int> vec;

  public:
    void push(int x) {
      vec.push_back(x);
    }

    void pop() {
      vec.erase(vec.begin());
    }

    bool empty() {
     return vec.empty();
    }

    int front() {
      return vec.front();
    }

    int back() {
      return vec.back();
    }
};

int main() {

  Queue q = Queue();

  q.push(1);
  q.push(2);
  q.push(3);

}