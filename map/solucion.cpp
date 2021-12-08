#include "iostream"
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <unordered_map>

using namespace std;

vector<string> split(const char *str, char c = ' '){
    vector<string> result;
    do {
        const char *begin = str;
        while(*str != c && *str) str++;
        result.push_back(string(begin, str));
    } while (0 != *str++);

    return result;
}



int main() {
  int T;
  cin >> T;

  double puntos = 0.0;

  string d;
  getline(cin, d);

  while(T-- > 0) {
    string revista, carta, correctAnswer;
    getline(cin, revista);
    getline(cin, carta);
    getline(cin, correctAnswer);

    string currentAnswer = solucion(revista, carta) ? "si" : "no";

    cout << "CASO NUMERO: " << T << endl;

    cout << "REVISTA: " << revista << endl;
    cout << "CARTA: " << carta << endl;
    cout << "correctAnswer: " << correctAnswer << endl;
    cout << "currentAsnwer: " << currentAnswer << endl;

    if (currentAnswer == correctAnswer) {
      puntos += 1.2;
    }

    cout << "=============" << endl;
    cout << endl;
  }

  cout << "Nota final: " << puntos + 1.0 << endl;

}