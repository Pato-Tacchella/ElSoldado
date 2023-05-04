#include <iostream>
#include <string>
using namespace std;

class Soldado
{
	Armas* _arma;

public:
	Soldado() { _arma = NULL; }; 
	//~Soldado() { cout << "borrado"; delete Soldado; };

	void elegirArma(int n);
	bool tieneArma();
	void dejarArma();
	void armaEnUso();
	void gatillar();
};

class Armas
{
public:
	string arma;
	
	Revolver* _revolver;
	Rifle* _rifle;
	Escopeta* _escopeta;

	//Armas() { arma = NULL; };
	//~Armas() { cout << "borrar arma"; delete Armas; };

	void disparar() { /*cada arma dispara distinto*/ };
};

class Revolver : public Armas
{
	
};

class Rifle : public Armas
{

};

class Escopeta : public Armas
{

};


void Soldado::elegirArma(int n)
{
	cout << "Por favor, escoja el arma que desea utilizar: \n"
		<< "\n"
		<< "1. Revolver\n"
		<< "2. Rifle\n"
		<< "3. Escopeta\n"
		<< "0. Volver atras ";
	
	switch (n)
	{
	case 1: { _arma = _arma->_revolver; } break;
	case 2: { _arma = _arma->_rifle; } break;
	case 3: { _arma = _arma->_escopeta; } break;
	case 0: {  /* salir */ } break;
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








int main()
{
	Soldado* sold = new Soldado();


	string entradaPrin;
	
	//while (entradaPrin != "X")
	//{
	//	

	//	cin >> int entradaPrin;

	//	switch (entradaPrin)
	//	{
	//	default:
	//	{
	//		cout << " -== Bienvenido al campo de entrenamiento, Soldado ==- \n\n";

	//		cout << "Que desea hacer? \n"
	//			<< "(presione el numero correspondiente a la opcion del menu)\n"
	//			<< "\n"
	//			<< "1. Recoger arma\n"
	//			<< "2. Dejar arma\n"
	//			<< "3. Disparar\n"
	//			<< "4. Ver arma en uso\n"
	//			<< "0. Salir";
	//	}
	//		break;
	//	case 1: 
	//	{
	//		if (sold->tieneArma())
	//		{
	//			int eleccion;

	//			cout << "Por favor, escoja el arma que desea utilizar: \n"
	//				<< "\n"
	//				<< "1. " << arma->Escopeta << "\n"
	//				<< "2. " << arma->Revolver<< "\n"
	//				<< "3. " << arma->Rifle << "\n"
	//				<< "0. Volver atras ";
	//			
	//			//arma->elegirArma(cin >> eleccion);
	//			
	//			if (eleccion == 0)
	//			{
	//				entradaPrin = default;
	//			}

	//		}
	//		else 
	//		{
	//			cout << "Usted ya posee un arma.. \n"
	//				<< "\n"
	//				<< "Presione X para volver para atras";
	//			//implementar comandos
	//			
	//		}
	//	}
	//		break;

	//	case 2:
	//	{
	//		cout << "Usted posee: " << arma << "\n"
	//			<< "\n"
	//			<< "Precione ENTER, para dejar su arma y volver al menu anterior";
	//		
	//		// arma = NULL 
	//		//volver para atras

	//	}
	//		break;

	//	case 3: 
	//	{
	//		if (sold->tieneArma())
	//		{
	//			cout << " Usted a disparado.. ";
	//		}
	//		else
	//		{
	//			cout << "usted no tiene arma, debe elegir una antes de disparar \n"
	//				<< "presione Y para ir al menu de armas.. ";
	//			// implementar if Y >> a armas 
	//			// si no x o enter e ir a menu general
	//		}
	//	}
	//		break;

	//	case 4:
	//	{
	//		if (sold->tieneArma())
	//		{
	//			cout << " Usted esta equipando: " << arma;
	//		}
	//		else
	//		{
	//			cout << " Usted no esta quipando arma";
	//		}
	//		// como salgo?
	//	}
	//	break;
	//	}
	//}
	

}