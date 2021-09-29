#include "iostream"

using namespace std;

class Cuenta { 
  protected:
    string cliente;
    int numero;
    double saldo;
    string tipo;
    
  public:
    Cuenta(string cliente , int numero , double saldo) {
      this->cliente = cliente;
      this->numero = numero;
      this->saldo = saldo;
      this->tipo = "cuenta";
    }

    virtual void deposito(double monto) {
      saldo = saldo + monto;
    }

    virtual void retiro(double monto) {
      if (monto > saldo) {
        cout << "Saldo insuficiente" << endl;
        return;
      }

      saldo = saldo - monto;
    }  

    string getTipo () {
      return tipo
    }
  
    int getNumero() {
      return numero;
    }

    double getSaldo () {
      return saldo;
    }
};

class CuentaEjecutiva : public Cuenta {
  public:
    CuentaEjecutiva(string cliente , int numero , double saldo) : Cuenta(cliente, numero, saldo) {
      tipo = "CuentaEjecutiva";
    }

    void deposito(double monto) {
      saldo = saldo + monto;
    }

    void retiro(double monto) {
      if (monto > 200000) {
        cout << "Monto no valido" << endl;
        return; 
      }

      double totalMasImpuesto = monto + (monto * 0.01);

      if (totalMasImpuesto > saldo) {
        cout << "Saldo insuficiente" << endl;
        return; 
      }

      saldo = saldo - totalMasImpuesto;
    }

};

class CuentaJoven : public Cuenta {
  CuentaJoven(string cliente, int numero, double saldo) : Cuenta(cliente, numero, saldo) {
    tipo = "CuentaJoven";
  }

  void deposito(double monto) {
    if (monto > 50000) {
      cout << "Monto no valido" << endl;
      return; 
    }

    saldo = saldo + monto;
  } 

  void retiro(double monto) {
    if (monto > 200000) {
      cout << "Monto no valido" << endl;
      return; 
    }

    double totalMasImpuesto = monto + (monto * 0.005);

    if (totalMasImpuesto > saldo) {
      cout << "Saldo insuficiente" << endl;
      return; 
    }

    saldo = saldo - totalMasImpuesto;
  } 
};

class Banco {
  private:
    Cuenta *cuentas[100];
  public: 
    Banco () {}

    void realizarDeposito(int numero, double monto) {
      // Creamos una variable que guarde la cuenta a buscar
      Cuenta *temp = nullptr;

      // Buscamos la cuenta
      for (int i = 0; i < 100; i++) {
        
        // Si existe la cuenta, la guardamos en temp  
        if (cuentas[i]->numero == numero) {
          temp = cuentas[i];
          break;
        }

      }

      // Si temp es nullptr, quiere decir que la cuenta no existe
      if (temp == nullptr) {
        return;
      }
      
      // Si existe temp, realizamos el deposito
      temp->deposito(monto);

    }

    void realizarRetiro(int numero, double monto) {
      Cuenta *temp = nullptr;
      for (int i = 0; i < 100; i++) {
        if (cuentas[i]->numero == numero) {
          temp = cuentas[i];
          break;
        }
      }

      if (temp == nullptr) {
        return;
      }
      
      temp->retiro(monto);
    }
};
