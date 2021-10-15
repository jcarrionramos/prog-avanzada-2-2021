#include "iostream"

using namespace std;

class Node {
  private:
    int value;
    Node* next;

  public:
    Node(int value) {
      this->value = value;
      this->next = NULL;
    }

    int getValue() {
      return this->value;
    }

    void setValue(int newValue) {
      this->value = newValue;
    }

    Node* getNext() {
      return this->next;
    }

    void setNext(Node* newNext) {
      this->next = newNext;
    }
};

int main() {
  Node* a = new Node(1);
  Node* b = new Node(2);
  Node* c = new Node(3);

  a->setNext(b);
  b->setNext(c);

  Node* temp = a;
  while(temp != NULL) {
    cout << temp->getValue() << endl;
    temp = temp->getNext();
  }
}