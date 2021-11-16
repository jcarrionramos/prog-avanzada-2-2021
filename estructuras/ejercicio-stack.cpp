#include "iostream"
#include "stack"

using namespace std;

class Libro {
  private:

  string nombre;
  int ejercicios;

  public:

  Libro(string nombre, int ejercicios) {
    this->nombre = nombre;
    this->ejercicios = ejercicios;
  }

  string getNombre() {
    return nombre;
  }

  int getEjercicios() {
    return ejercicios;
  }
};

class PilaEjercicios {
  private:
  
  stack<Libro> stack;

  public:

  PilaEjercicios(){}

// Agregar un libro a la pila
  void agregar(string nombre, int ejercicios){}

// Saca el último elemento en entrar a la pila
  void resolver(){}

// Desapila todo los libros hasta el libro con la mayor cantidad de ejercicios
  void resolverMax(){}
};