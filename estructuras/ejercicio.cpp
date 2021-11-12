#include "iostream"
#include "vector"

using namespace std;

class Curso {
  private:
    string nombre;
    int nota1, nota2, nota3;

  public:
    Curso(string nombre, int nota1, int nota2, int nota3) {
    }

    string getNombre() {
    }

    // Calcula el promedio de las 3 notas
    float promedio() {
    }

};

class Alumno {
  private:
    string nombre;
    int edad;
    vector<Curso> cursos;
  
  public:

    Alumno(string nombre, int edad) {
    }
    
    // Crea un curso y lo agrega el vector cursos
    void agregarCurso(string nombreCurso, int nota1, int nota2, int nota3) {
    }

    // Calcula el promedio general con todos los cursos asosciados
    float promedioSemestral() {
    }

    // Imprime los datos
    void imprimirDatos() {
      // Nombre: Javier
      // Edad: 25
      // Calculo: 4.0
      // Algebra: 4.0
      // Programación: 6.0
      // Promedio general: 4,9
    }

    // Elimina del vector el curso que cumpla con el nombre
    void eliminarCurso(string nombreCurso) {
    }

    // Agrega un curso al vector pero verfica antes que no se encuentre en el vector
    void agregarSinRepetirNombre(string nombreCurso, int nota1, int nota2, int nota3){
    }

};