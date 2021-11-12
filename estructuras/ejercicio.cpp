#include "iostream"
#include "vector"

using namespace std;

class Curso {
  private:
    string nombre;
    int nota1, nota2, nota3;

  public:
    Curso(string nombre, int nota1, int nota2, int nota3) {
      this->nombre = nombre;
      this->nota1 = nota1;
      this->nota2 = nota2;
      this->nota3 = nota3;
    }

    string getNombre() {
      return this->nombre;
    }

    // Calcula el promedio de las 3 notas
    float promedio() {
      float promedio = (this->nota1 + this->nota2 + this->nota3) / 3;
      return promedio;
    }

};

class Alumno {
  private:
    string nombre;
    int edad;
    vector<Curso> cursos;
  
  public:

    Alumno(string nombre, int edad) {
      this->nombre = nombre;
      this->edad = edad;
    }
    
    // Crea un curso y lo agrega al vector cursos
    void agregarCurso(string nombreCurso, int nota1, int nota2, int nota3) {
      Curso nuevoCurso = Curso(nombreCurso, nota1, nota2, nota3);
      cursos.push_back(nuevoCurso);
    }

    // Calcula el promedio general con todos los cursos asosciados
    float promedioSemestral() {
      int suma = 0;
      for (int i = 0; i < cursos.size(); i++) {
        suma = suma + cursos[i].promedio();
      }

      return suma / cursos.size();
    }

    // Imprime los datos
    // Nombre: Javier
    // Edad: 25
    // Calculo: 4.0
    // Algebra: 4.0
    // Programación: 6.0
    // Promedio semestral: 4,9
    void imprimirDatos() {
      cout << "Nombre: " << nombre << endl;
      cout << "Edad: " << edad << endl;
      for (int i = 0; i < cursos.size(); i++) {
        cout << cursos[i].getNombre() << ": " << cursos[i].promedio() << endl;
      }
      cout << "Promedio semestral: " << promedioSemestral() << endl;
    }

    // Elimina del vector el curso que cumpla con el nombre
    void eliminarCurso(string nombreCurso) {
      for (int i = 0; i < cursos.size(); i++) {
        if (cursos[i].getNombre() == nombreCurso) {
          cursos.erase(cursos.begin() + i);
          return;
        }
      }
      cout << "Curso no encontrado" << endl;
    }

    // Agrega un curso al vector pero verfica antes que no se encuentre en el vector
    // en caso de el curso ya haya sido ingresado, se debe mostrar por pantalla
    // "Curso ya inscrito" y no se ingresa.
    void agregarSinRepetirNombre(string nombreCurso, int nota1, int nota2, int nota3){

    }

};


// Ejercicio propuesto
// Convertir de decimal a binario:
// 
// Ejemplo: 7
//  
//       7 % 2 = 1  2^0
// (7/2) 3 % 2 = 1  2^1
// (3/2) 1 % 2 = 1  2^2
// (1/2) 0 => fin
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
// return "1000"; 