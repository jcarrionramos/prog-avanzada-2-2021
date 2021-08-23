#include <iostream>
using namespace std;

class Cliente
{
private:
	string nombre;
	string rut;
	int dinero_cuenta;
	int deuda;

public:
	Cliente()
	{
		nombre = "";
		rut = "";
		dinero_cuenta = 0;
		deuda = 0;
	}
	Cliente(string nombre, string rut, int dinero_cuenta, int deuda)
	{
		this->nombre = nombre;
		this->rut = rut;
		this->dinero_cuenta = dinero_cuenta;
		this->deuda = deuda;
	}
	string getNombre()
	{
		return this->nombre;
	}
	string getRut()
	{
		return this->rut;
	}
	int getDineroCuenta()
	{
		return this->dinero_cuenta;
	}
	int getDeuda()
	{
		return this->deuda;
	}
	void setNombre(string nombre)
	{
		this->nombre = nombre;
	}
	void setRut(string rut)
	{
		this->rut = rut;
	}
	void setDineroCuenta(int dinero_cuenta)
	{
		this->dinero_cuenta = dinero_cuenta;
	}
	void setDeuda(int deuda)
	{
		this->deuda = deuda;
	}
	void situacion()
	{
		if (this->dinero_cuenta < this->deuda)
		{
			cout << "La deuda es mayor que el dinero en cuenta" << endl;
		}
		else
		{
			cout << "El dinero en cuenta es mayor que la deuda" << endl;
		}
	}
};

int main()
{
	string nombre, rut;
	int dinero_cuenta, deuda;
	cout << "Ingrese nombre" << endl;
	cin >> nombre;
	cout << "Ingrese rut" << endl;
	cin >> rut;
	cout << "Ingrese monto en la cuenta" << endl;
	cin >> dinero_cuenta;
	cout << "Ingrese deuda" << endl;
	cin >> deuda;

	Cliente *cliente1 = new Cliente(nombre, rut, dinero_cuenta, deuda);

	cliente1->situacion();

	return 0;
}