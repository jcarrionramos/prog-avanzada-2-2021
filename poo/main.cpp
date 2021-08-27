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

    void setNombre(string nuevoNombre) {
      this->nombre = nuevoNombre;
    }

    int getEdad() {
      return this->edad;
    }

    void setEdad(int nuevaEdad) {
      this->edad = nuevaEdad;
    }

    string getCarrera() {
      return this->carrera;
    }

    void setCarrera() {
      cout << "Ingresa la nueva carrera que vas a estudiar" << endl;
      string nuevaCarrera;
      cin >> nuevaCarrera;

      this->carrera = nuevaCarrera;
    }

    string getRut() {
      return this->rut;
    }

    void setRut(string nuevoRut) {
      this->rut = nuevoRut;
    }    
};

void cumplirAnios(Student alumno) {
  int edadActual = alumno.getEdad();
  alumno.setEdad(edadActual + 1);
}


void cumplirAnios(Student* alumno) {
  int edadActual = alumno->getEdad();
  alumno->setEdad(edadActual + 1);
}

int main() {
  Student alumno1 = Student("Javier", 20, "Informatica", "19137116-k");
  Student* alumno2 = new Student("Javier", 20, "Informatica", "19137116-k");

  cout << "La edad antes de cumplir alumno 1: " << alumno1.getEdad() << endl;
  cout << "La edad antes de cumplir alumno 2: " << alumno2->getEdad() << endl;

  cumplirAnios(alumno1);
  cumplirAnios(alumno2);

  cout << "La edad despues de cumplir alumno 1: " << alumno1.getEdad() << endl;
  cout << "La edad despues de cumplir alumno 2: " << alumno2->getEdad() << endl;
}