#include "iostream"
#include "map"
#include "vector"

using namespace std;

// Si dos numeros dentro del vector 'numbers' suman 'target' => retorno true
// en caso contrario, si no hay dos números que sumen 'target' => retorno false
// 
// ejemplo:   
// numbers = [1, 2, 3]; target = 4 => true
// numbers = [1, 2, 3]; target = 10 => false
bool badSolution(vector<int> &numbers, int target) {
  int count = 0;

  for (int i = 0; i < numbers.size(); i++) {
    for (int j = i + 1; j < numbers.size(); j++){

      count++;
      if (numbers[i] + numbers[j] == target) {
        cout << "Cantidad de comparaciones BadSolution: " << count << endl;
        return true;
      }
    }    
  }

  cout << "Cantidad de comparaciones BadSolution: " << count << endl;

  return false;
}

bool bestSolution(vector<int> &numbers, int target) {
  int count = 0;
  map<int, int> map;

  // Insertar valores dentro del mapa
  for (int i = 0; i < numbers.size(); i++) {
    map.insert(make_pair(numbers[i], i));
  }

  for (int i = 0; i < numbers.size(); i++) {
    int complement = target - numbers[i];

    auto current = map.find(complement);
    count++;
    if (current != map.end()) {
      cout << "Cantidad de comparaciones BestSolution: " << count << endl;
      return true;
    }
  }

  cout << "Cantidad de comparaciones BestSolution: " << count << endl;
  return false;
}

int main() {
  int n, target;
  vector<int> numbers;

  cin >> n >> target;

  for (int i = 0; i < n;  i++) {
    int current;
    cin >> current;
    numbers.push_back(current);
  }

  badSolution(numbers, target);
  bool flag = bestSolution(numbers, target);

  if (flag) {
    cout << "Si" << endl;
  } else {
    cout << "No" << endl;
  }
}