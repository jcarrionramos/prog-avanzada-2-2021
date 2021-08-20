#include "iostream"

using namespace std;

class Student {
  // Atributos
  private:
    string nombre;
    int edad;
    string carrera;
    string rut;
  
  public:
    // Constructor
    Student(string nombre, int edad, string carrera, string rut) {
      this->nombre = nombre;
      this->edad = edad;
      this->carrera = carrera;
      this->rut = rut;
    }

    // Métdos
    string getNombre() {
      return this->nombre;
    }

    void setNombre(string nombre) {
      this->nombre = nombre;
    }

    int getEdad() {
      return this->edad;
    }
};

int main() {
  Student alumno1 = Student("Javier", 25, "Informatica", "19137116-k");
  cout << "El nombre del alumno 1 es: " << alumno1.getNombre() << endl;
  alumno1.setNombre("Maria");
  cout << "El nombre del alumno 1 es: " << alumno1.getNombre() << endl;
}