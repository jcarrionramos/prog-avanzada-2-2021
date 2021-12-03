#include "iostream"
#include "map"
#include "vector"
#include "unordered_map"

using namespace std;

class Persona {
  private:
  int id;
  string nombre;
  int salario;

  public:
  Persona(int id, string nombre, int salario) {
    this->id = id;
    this->nombre = nombre;
    this->salario = salario;
  }

  int getId() {
    return id;
  }

  string getNombre() {
    return nombre;
  }

  int getSalario() {
    return salario;
  }

};


class Empresa {
  private:
  unordered_map<int, Persona> colaboradores;

  public:
  Empresa(){}


  // agregar o actualizar el registro
  void agregar(int id, string nombre, int salario) {
    Persona persona = Persona(id, nombre, salario);
    auto it = colaboradores.find(id);
    // unordered_map<int, Persona>::iterator it = colaboradores.find(id);

    // Caso cuando la persona no existe
    // se crea un nuevo elemento y se inserta en el mapa
    if (it == colaboradores.end()) {
      colaboradores.insert(make_pair(id, persona));
      return;
    }

    // forma 1
    // colaboradores[id] = persona;

    // forma 2
    // it->second = persona;

    // forma 3
    colaboradores[it->first] = persona;
    
  }

  // elimina y retorna el nombre de la persona seleccionada
  // si no existe, entoces imprime "Usuario no encontrado"
  string eliminar(int id) {
    unordered_map<int, Persona>::iterator it = colaboradores.find(id);

    if (it == colaboradores.end()) {
      cout << "Usuario no encontrado" << endl;
      return;
    }

    // forma 1
    string nombre = colaboradores[id].getNombre();
    colaboradores.erase(id);

    // forma 2
    // string nombre = it->second.getNombre();
    // colaboradores.erase(it);

    return nombre;
  }

  // retorna la suma de todos los salario de los trabajadores
  int gastoMensual() {
    int total = 0;
    for (auto it = colaboradores.begin(); it != colaboradores.end(); it++) {
      total = total + it->second.getSalario();
      // total = total + colaboradores[it->first].getSalario();
    }
    return total;
  }

  // devuelve un vector con las personas ordenadas por id
  vector<Persona> personasOrdenadas() {
    vector<Persona> personas;
    map<int, Persona> map;

    for (auto it = colaboradores.begin(); it != colaboradores.end(); it++) {
      map.insert(make_pair(it->first, it->second));
    }

    for (auto it = map.begin(); it != map.end(); it++) {
      personas.push_back(it->second);
    }

    return personas;
  }

};
