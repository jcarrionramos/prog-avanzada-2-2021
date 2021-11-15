#include "iostream"
#include "vector"

using namespace std;

// Recorrer
void printVector(vector<int> v) {
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}

int main() {
  vector<int> v;
  // Insertar
  v.push_back(1);
  v.push_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.insert(v.begin()+2, 10);

  // Eliminar
  v.pop_back();
  v.erase(v.begin()+2);

  cout << "vector.empty(): " << v.empty() << endl;
  cout << "vector.front(): " << v.front() << endl;
  cout << "vector.back(): " << v.back() << endl;

  printVector(v);
}