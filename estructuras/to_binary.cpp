#include "iostream";
#include "stack";

using namespace std;

// Ejercicio propuesto
// Convertir de decimal a binario:
// 
// Ejemplo: 7
//  
//       7 % 2 = 1  2^0
// (7/2) 3 % 2 = 1  2^1
// (3/2) 1 % 2 = 1  2^2
// (1/2) 0 => fin
// 
// return "111"
// 
// ------- 0 -------
// 
// Ejemplo: 8
//
//       8 % 2 = 0  2^0
// (8/2) 4 % 2 = 0  2^1
// (4/2) 2 % 2 = 0  2^2
// (2/2) 1 % 2 = 1  2^3
// (1/2) 0 => fin
// 
// return "1000"; 
// 
// ------- 0 -------
// 
// Ejemplo: 6
//
//       6 % 2 = 0  2^0
// (6/2) 3 % 2 = 1  2^1
// (3/2) 1 % 2 = 1  2^2
// (1/2) 0 => fin
// 
// return "110"

void toBinary(int number){
  stack<int> s;
  while(number > 0) {
    s.push(number % 2);
    number = number / 2;
  }

  while(!s.empty()) {
    cout << s.top();
    s.pop();
  }

  cout << endl;

} 