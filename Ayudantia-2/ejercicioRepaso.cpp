#include <iostream>
using namespace std;

class Figura
{
private:
	int ancho;
	int alto;
	int profundidad;

public:
	Figura()
	{
		ancho = 0;
		alto = 0;
		profundidad = 0;
	}
	Figura(int ancho, int alto, int profundidad)
	{
		this->ancho = ancho;
		this->alto = alto;
		this->profundidad = profundidad;
	}
	int getAncho()
	{
		return this->ancho;
	}
	int getAlto()
	{
		return this->alto;
	}
	int getProfundidad()
	{
		return this->profundidad;
	}
	void setAncho(int ancho)
	{
		this->ancho = ancho;
	}
	void setAlto(int alto)
	{
		this->alto = alto;
	}
	void setProfundidad(int profundidad)
	{
		this->profundidad = profundidad;
	}
	int calcularVolumen()
	{
		return this->alto * this->ancho * this->profundidad;
	}
	void calcular_volumen()
	{
		cout << this->alto * this->ancho * this->profundidad << endl;
	}
};

int main()
{
	Figura *cubo = new Figura(3, 3, 3);

	cubo->calcular_volumen();

	cout << cubo->calcularVolumen() << endl;

	return 0;
}