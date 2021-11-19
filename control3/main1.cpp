#include "iostream"
#include "vector"

using namespace std;

int main() {
  vector<int> numeral;

  numeral.push_back(5);
  numeral.push_back(25);
  numeral.push_back(35);
  numeral.push_back(1);
  numeral.push_back(8);
  numeral.push_back(10);

  numeral.erase(numeral.begin() + 1);
}