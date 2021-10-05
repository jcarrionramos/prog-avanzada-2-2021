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
      return tipo;
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

    Cuenta::retiro(totalMasImpuesto);
  } 
};

class Banco {
  private:
    Cuenta *cuentas[100];

    Cuenta *buscarCuenta(int numero) {
      Cuenta *temp = nullptr;
      for (int i = 0; i < 100; i++) {
        if (cuentas[i]->getNumero() == numero) {
          temp = cuentas[i];
          break;
        }
      }

      return temp;
    }

  public: 
    Banco () {}

    void realizarDeposito(int numero, double monto) {
      Cuenta *temp = buscarCuenta(numero);
      if (temp ==  nullptr) return;

      temp->deposito(monto);
    }

    void realizarRetiro(int numero, double monto) {
      Cuenta *temp = buscarCuenta(numero);
      if (temp ==  nullptr) return;

      temp->retiro(monto);
    }
};
