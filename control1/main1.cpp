#include "iostream"

using namespace std;

class Reloj {
  private:
    int hora;
    int min;
    int sec;

  public:
    // Asumiendo tenemos métodos get y set


    // ho es un objeto de tipo Reloj que cuenta con
    // la hora oficial. Se debe tomar los parámetros
    // y ajustarlos a la hora de *ho. Ademas imprimir
    // por pantalla si está adelantado, atrasado o a la hora
    void ajustarHoraOficial(Reloj *ho) {
      int horaCopia = hora;
      int minCopia = min;
      int secCopia = sec;

      // Actualizando la hora
      hora = ho->getHora();
      min = ho->getMin();
      sec = ho->getSec();

      if (horaCopia > hora) {
        cout << "Adelantado" << endl;
        return;
      }

      if (horaCopia < hora) {
        cout << "Atrasado" << endl;
        return;
      }

      if (minCopia > min) {
        cout << "Adelantado" << endl;
        return;
      }

      if (minCopia < min) {
        cout << "Atrasado" << endl;
        return;
      }

      if (secCopia > sec) {
        cout << "Adelantado" << endl;
        return;
      }

      if (secCopia < sec) {
        cout << "Atrasado" << endl;
        return;
      }

      cout << "A la hora" << endl;
    }

};