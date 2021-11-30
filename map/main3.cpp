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
    
  }

  // elimina y retorna el nombre de la persona a seleccionada
  // si no existe, entoces imprime "Usuario no encontrado"
  string eliminar(int id) {
    
  }

  // retorna la suma de todos los salario de los trabajadores
  int gastoMensual() {
    
  }

  // devuelve un vector con las personas ordenadas por id
  vector<Persona> personasOrdenadas() {

  }

};
