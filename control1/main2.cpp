#include "iostream"

using namespace std;

class Libro {
  private:
    string titulo;
    string autor;
    int edicion;
    int publi;

  public:
    Libro(string titulo_, string autor_, int edicion_, int publi_) {
      titulo = titulo_;
      autor = autor_;
      edicion = edicion_;
      publi = publi_;
    }

    void setTitulo(string t) {
      titulo = t;
    }

    void setAutor(string t) {
      autor = t;
    }

    void setEdicion(int t) {
      edicion = t;  
    }

    void setPubli(int t) {
      publi = t;
    }

    string getTitulo(string t) {
      return titulo;
    }

    string getAutor(string t) {
      return autor;
    }

    int getEdicion(int t) {
      return edicion;  
    }

    int getPubli(int t) {
      return publi;
    }

    int codigoBusqueda() {
      return publi*10 + edicion;
    }

    void mostrarDatos() {
      cout << "Titulo:  " << titulo << endl;
      cout << "Autor:  " << autor << endl;
      cout << "Anno:  " << publi << endl;
    }
};