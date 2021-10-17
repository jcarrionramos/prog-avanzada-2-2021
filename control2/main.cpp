#include "iostream"

using namespace std;

class Libro {
  private:
    string titulo;
    string autor; 
    int anio;
    int edicion;
    string trilogia;

  public:
    Libro(string _titulo, string _autor, int _anio, int _edicion) {
      titulo = _titulo;
      autor =  _autor;
      anio = _anio;
      edicion = _edicion;
      trilogia = "";
    }

    void setTrilogia(string _trilogia) {
      trilogia = _trilogia;
    }

    string getTrilogia() {
      return trilogia;
    }

    string getAutor() {
      return autor;
    }

    int getAnio() {
      return anio;
    }

    void mostrarDatos() {
      cout << "Titulo: " << titulo << endl;
      cout << "Autor: " << autor << endl;
      cout << "Anio: " << anio << endl;
      cout << "Edicion: " << edicion << endl;
    }
};
 
Libro* juntar(Libro *l1, Libro *l2, Libro *l3) {
  string nombre;
  if (l1->getTrilogia() == l2->getTrilogia() && l1->getTrilogia() == l3->getTrilogia()){
    nombre = l1->getTrilogia();
  } else {
    nombre = "Compilación";
  }

  string autor;
  if (l1->getAutor() == l2->getAutor() && l1->getAutor() == l3->getAutor()){
    autor = l1->getAutor();
  } else {
    autor = "Autores Varios";
  }

  return new Libro(nombre, autor, l3->getAnio(), 1);
}