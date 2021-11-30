#include "iostream"
#include "map"

using namespace std;

int main() {
  map<string, int> alumnos;

  // Insertar
  alumnos.insert(make_pair("Martin", 40));
  alumnos.insert(make_pair("Javier", 26));
  alumnos.insert(make_pair("Maria", 30));
  alumnos["Javier"] = 28;

  auto it = alumnos.begin();
  while(it != alumnos.end()) {
    string key = it->first;
    int value = alumnos[key]; // it->second == alumnos[key]
    cout << "La edad de " << key << " es: " << value << endl;
    it++;
  }

  if(alumnos.find("Martin") != alumnos.end()) {
    cout << "Martin SI existe en el mapa" << endl;
  }

  if(alumnos.find("Tomas") == alumnos.end()) {
    cout << "Tomas NO existe en el mapa" << endl;
  }

}