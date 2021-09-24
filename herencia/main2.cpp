#include "iostream"

using namespace std;

class Animal {
  protected:
    int edad;

  public:
    Animal(int _edad) {
      edad = _edad;
    }

    int getEdad() {
      return edad;
    }

    void setEdad(int _edad) {
      edad = _edad;
    }

    virtual void comer() {
      cout << "A comer" << endl;
    }
 };


 class Humano : public Animal {
  private:
    string nombre;

  public:
    Humano(int _edad, string _nombre) : Animal(_edad) {
      nombre = _nombre;
    }

    string getNombre() {
      return nombre;
    }

    void comer() {
      cout << "Los humanos comen sentados a la mesa" << endl;
    }
};

 class Perro : public Animal {
   private:
    string nombre;
    string raza;

  public:
    Perro(int _edad, string _nombre, string _raza) : Animal(_edad) {
      nombre = _nombre;
      raza = _raza;
    }

    string getNombre() {
      return nombre;
    }

    void comer() {
      cout << "Los perritos comen en el piso" << endl;
    }
 };

int main() {
  Animal *arr[3] = { new Animal(1) , new Humano(1, "javier"), new Perro(1, "pluto", "bulldog") }; 

  for (int i = 0; i < 3; i++) {
    arr[i]->comer();
  }
 }