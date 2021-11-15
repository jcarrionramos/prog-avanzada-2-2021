#include "iostream";
#include "vector";


using namespace std;

// Imprmente una stack usando un vector
// LIFO (Last In First Out)
class Stack {
  private:
    vector<int> vec;

  public: 
    Stack() {
    }

    void push(int newElement) {
      vec.insert(vec.begin(), newElement);
    }

    void pop() {
      vec.erase(vec.begin());
    }

    int top() {
      return vec.front();
    }

    bool empty() {
      return vec.empty();
    }
};