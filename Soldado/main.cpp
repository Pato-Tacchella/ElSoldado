#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;



class Armas
{
protected:
	string name = NULL;
	string disparo = NULL;

public:
	Armas() { };
	~Armas() { };
	void setArma() {};
	virtual void disparar();
	string getArma() { return name; };
};

class Revolver : public Armas
{
	Revolver() : Armas() {
		name = "Revolver";
		disparo = "Pum";
	};
	~Revolver() { };
	void disparar() { cout << disparo << "\n"; };
};

class Rifle : public Armas
{
	Rifle() : Armas () {
		name = "Rifle";
		disparo = "Pum pum pum..";
	};
	~Rifle() { };
	void disparar() {
		cout << disparo << "\n";
	};
};

class Escopeta : public Armas
{
	Escopeta() : Armas() {
		name = "Escopeta";
		disparo = "Paaa...";
	};
	~Escopeta() { };
	void disparar() {
		cout << disparo << "\n";
	};
};

class Soldado
{
	Armas* _arma;

public:
	Soldado() { cout << "creando"; };
	~Soldado() { cout << "borrado"; };

	void elegirArma();
	bool tieneArma();
	void dejarArma();
	void armaEnUso();
	void gatillar();
};

void Soldado::elegirArma()
{
	int n;
	cout << "Por favor, escoja el arma que desea utilizar: \n"
		<< "\n"
		<< "1. Revolver\n"
		<< "2. Rifle\n"
		<< "3. Escopeta\n"
		<< "0. Volver atras ";
	cin >> n;

	switch (n)
	{
	case 1: { 
		Revolver* revolver = new Revolver();
		_arma = revolver;
		cout << "Usted eligio: " << revolver->getArma();
		//SALIR  n = 0;
	} break;
	case 2: { 
		Rifle* rifle;
		_arma = rifle;
		cout << "Usted eligio: " << rifle->getArma();
		//salir
	} break;
	case 3: { 
		Escopeta* escopeta;
		_arma = escopeta;
		cout << "Usted eligio: " << escopeta->getArma();
		//salir
	} break;
	case 0: {  /* SALIR */ } break;
	}

}

bool Soldado::tieneArma()
{
	if (_arma == NULL)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void Soldado::dejarArma()
{
	_arma = NULL;
}

void Soldado::gatillar()
{
	_arma->disparar();
}

void Soldado::armaEnUso()
{
	if (tieneArma())
	{
		cout << "Esta armado con: " << _arma << "\n";
	}
	else 
	{
		cout << "Usted no posee arma \n";
	}
}



void Armas::disparar()
{
	cout << disparo << "\n";
}





int main()
{

	Soldado* sold = new Soldado();
	

	int opcion;
	
	
	
	switch (opcion)
	{
	default:
	{
		cout << " -== Bienvenido al campo de entrenamiento, Soldado ==- \n\n";

		cout << "Que desea hacer? \n"
			<< "(presione el numero correspondiente a la opcion del menu)\n"
			<< "\n"
			<< "1. Recoger arma\n"
			<< "2. Dejar arma\n"
			<< "3. Disparar\n"
			<< "4. Ver arma en uso\n"
			<< "0. Salir";
	}
	break;

	case 1:
	{		
		;
	}
	break;
	}
}