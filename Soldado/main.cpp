#include <iostream>
#include <stdlib.h>
using namespace std;


class Gun
{
protected:
	string name;
	string shot;
public:
	Gun() {};
	~Gun() {};

	virtual string shooting() { return 0; };
	virtual string getGun() { return 0; };
};

class Revolver : public Gun
{
public:
	Revolver() {
		name = "Revolver";
		shot = "Pum..";
	};
	~Revolver() {};

	string shooting() override { return shot; };
	string getGun() override { return name; };
};

class Rifle : public Gun
{
public:
	Rifle() {
		name = "Rifle";
		shot = "Pum pum pum..";
	};
	~Rifle() {};

	string shooting() override { return shot; };
	string getGun() override { return name; };
};

class Escopeta : public Gun
{
public: 
	Escopeta() {
		name = "Escopeta";
		shot = "Paaa..";
	};
	~Escopeta() {};

	string shooting() override { return shot; };
	string getGun() override { return name; };
};

class Soldier
{
	Gun* gun = nullptr;
	string weapon;
	string shot;
public:
	Soldier() { weapon = ""; shot = ""; };
	~Soldier() {};

	bool haveWeapon();
	void chooseWeapon();
	void clearWeapon();
	void getWeapon();
	void trigger();
};

bool Soldier::haveWeapon()
{
	if (weapon.empty())
	{
		return false;
	}
	else
	{
		return true;
	}
}

void Soldier::chooseWeapon()
{
	int option;

	cout << "Por favor, escoja el arma que desea utilizar: \n"
		<< "\n"
		<< "1. Revolver\n"
		<< "2. Rifle\n"
		<< "3. Escopeta\n"
		<< "0. Volver atras ";
	cin >> option;

	if (!haveWeapon()) {
		switch (option)
		{
			case 1: {
				std::shared_ptr<Revolver> gun{ new Revolver };
				weapon = gun->getGun();
				shot = gun->shooting();
				cout << "Usted eligio: " << weapon << "\n";

			} break;
			case 2:
			{
				std::shared_ptr<Rifle> gun{ new Rifle };
				weapon = gun->getGun();
				shot = gun->shooting();
				cout << "Usted eligio: " << weapon << "\n";
			} break;
			case 3:
			{
				std::shared_ptr<Escopeta> gun{ new Escopeta };
				weapon = gun->getGun();
				shot = gun->shooting();
				cout << "Usted eligio: " << weapon << "\n";
			} break;
			default:
				break;
		}
	}
	else
	{
		cout << "Usted ya posee un arma en su inventario... \n"
			<< "Presione enter para volver al menu principal";
			//Salir
	}
}

void Soldier::clearWeapon()
{
	delete gun;
	weapon = "";
	shot = "";
	cout << "Usted no posee ningun arma en su inventario";
}

void Soldier::getWeapon()
{
	if (!haveWeapon())
	{
		cout << "Usted no posee un arma en su inventario... \n"
			<< "Presione enter para volver al menu principal\n";
		//Salir
	}
	else
	{
		cout << "Usted tiene equipada: " << weapon <<"\n";
	}
}


void Soldier::trigger()
{
	if (haveWeapon())
	{
		cout << shot;
		
	}
	else
	{
		cout << "Usted no posee un arma en su inventario... \n"
			<< "Presione enter para volver al menu principal\n";
	}
}


int main()
{
	Soldier* soldado = new Soldier;
	int opcion;

	do {
		system("cls");
		cout << " -== Bienvenido al campo de entrenamiento, Soldado ==- \n\n";
		
		cout << "que desea hacer? \n"
			<< "(presione el numero correspondiente a la opcion del menu)\n"
			<< "\n"
			<< "1. Recoger arma\n"
			<< "2. Dejar arma\n"
			<< "3. Disparar\n"
			<< "4. Ver arma en uso\n"
			<< "0. Salir \n";
		
		cin >> opcion;

		switch (opcion)
		{
		default: {

		} break;

		case 1: {
			system("cls");
			soldado->chooseWeapon();
			system("pause");
		} break;

		case 2: {
			system("cls");
			soldado->clearWeapon();
			system("pause");
		} break;
		case 3: {
			system("cls");
			soldado->trigger();
			system("pause");
		} break;
		case 4: {
			system("cls");
			soldado->getWeapon();
			system("pause");
		} break;
		case 0: {
			system("cls");
			cout << "Presione ENTER para salir";
			system("pause");

		} break;
		}
	} while (opcion != 0);
	



}


