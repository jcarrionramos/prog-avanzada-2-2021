#include "iostream"

using namespace std;

class Humano {
  protected:
    string nombre;
    string rut;
    int edad;

  public:
    // getter
    string getNombre() {
      return nombre;
    }

    string getRut() {
      return rut;
    }

    int getEdad() {
      return edad;
    }

    // setter
    void setNombre(string _nombre) {
      nombre = _nombre;
    }

    void setRut(string _rut) {
      rut = _rut;
    }

    void setEdad(int _edad) {
      edad = _edad;
    }

};


class Matematico : public Humano {
  public:
    Matematico(string _nombre, string _rut, int _edad) {
      nombre = _nombre;
      rut = _rut; 
      edad = _edad;
    }

    int suma(int a, int b) { 
      return a + b;
    }

    int restar(int a, int b) { 
      return a - b;
    }
};


class Escritor : public Humano {
  public:
    Escritor(string _nombre, string _rut, int _edad){
      setNombre(_nombre);
      setRut(_rut);
      setEdad(_edad);
    }

    void decirHolaMundo() {
      cout << "Hola mundo!" << endl;
    }
};

int main() {
  Matematico* m1 = new Matematico("Javier", "19137116k", 25);
  Escritor* e1 = new Escritor("Javiera", "19137117k", 25);

  // m1->nombre;

}