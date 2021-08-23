#include <iostream>
using namespace std;

class Libro
{
private:
	string nombre;
	string autor;
	int ano;
	int precio;
	int stock;

public:
	Libro()
	{
		nombre = "";
		autor = "";
		ano = 0;
		precio = 0;
		stock = 0;
	}
	Libro(string nombre, string autor, int ano, int precio, int stock)
	{
		this->nombre = nombre;
		this->autor = autor;
		this->ano = ano;
		this->precio = precio;
		this->stock = stock;
	}
	string getNombre()
	{
		return this->nombre;
	}
	int getStock()
	{
		return this->stock;
	}
	void setNombre(string nombre)
	{
		this->nombre = nombre;
	}
	void stockAumentar(int n)
	{
		this->stock += n;
	}
	void stockDisminuir(int n)
	{
		this->stock -= n;
	}
};

int main()
{
	Libro *libro1 = new Libro("papelucho", "marcela paz", 1968, 3500, 15);
	cout << "Stock libro: " << libro1->getStock() << endl;

	libro1->stockAumentar(30);
	cout << "Stock libro: " << libro1->getStock() << endl;

	libro1->stockDisminuir(45);
	cout << "Stock libro: " << libro1->getStock() << endl;

	return 0;
}