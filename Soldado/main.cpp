# include <iostream>
using namespace std;

class Soldado
{
	char arma;

public:
	Soldado() { arma = NULL; }; // podria aca adentro incluso iniciar el otro obj?
	~Soldado() { cout << "borrado"; delete Soldado; };

	void elegirArma();
	bool tieneArma();
	void dejarArma();
	void disparar();
	void armaEnUso();

};

class Armas
{
	enum arma { Revolver, Rifle, Escopeta };

public:
	void disparar();
};


int main()
{
	Soldado* sold = new Soldado();
	
	cout << " -== Bienvenido al campo de entrenamiento, Soldado ==- \n";

	cout << "Que desea hacer? \n"
		<< "(presione el numero correspondiente a la opcion del menu)\n"
		<< "\n"
		<< "1. Recoger arma\n"
		<< "2. Dejar arma\n"
		<< "3. Disparar\n"
		<< "4. Ver arma en uso\n"
		<< "0. Salir";

	while (cin char n != X)
	{
		switch (cin >> char n)
		{
		default:
			break;
		case 1: 
		{
			if (sold->tieneArma())
			{
				cout << "Por favor, escoja el arma que desea utilizar: \n"
					<< "\n"
					<< "1. " << arma << "\n"
					<< "2. " << arma + 1 << "\n"
					<< "3. " << arma + 1 << "\n"
					<< "X. Volver atras ";
				// Falta implementar asignacion de valores, puede ser que n return
				// arma = arma + cin 
			}
			else 
			{
				cout << "Usted ya posee un arma.. \n"
					<< "\n"
					<< "Presione X para volver para atras";
				//implementar comandos
				
			}
		}
			break;

		case 2:
		{
			cout << "Usted posee: " << arma << "\n"
				<< "\n"
				<< "Precione ENTER, para dejar su arma y volver al menu anterior";
			
			// arma = NULL 
			//volver para atras

		}
			break;

		case 3: 
		{
			if (sold->tieneArma())
			{
				cout << " Usted a disparado.. ";
			}
			else
			{
				cout << "usted no tiene arma, debe elegir una antes de disparar \n"
					<< "presione Y para ir al menu de armas.. ";
				// implementar if Y >> a armas 
				// si no x o enter e ir a menu general
			}
		}
			break;

		case 4:
		{
			if (sold->tieneArma())
			{
				cout << " Usted esta equipando: " << arma;
			}
			else
			{
				cout << " Usted no esta quipando arma";
			}
			// como salgo?
		}
		break;
		}
	}
	

}