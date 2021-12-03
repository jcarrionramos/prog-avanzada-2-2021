#include "iostream"
#include "vector"

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
  string lala = "HOLA MUNDO QUE TAL aa";
  vector<string> vec = split(lala.c_str());

  for (int i = 0; i < vec.size(); i++) {
    cout << vec[i] << endl;
  }

}