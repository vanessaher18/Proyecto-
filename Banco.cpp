#include <iostream>
#include <stdlib.h>
#include <string.h>


using namespace std;
class Bank {

	// Variables privadas usadas dentro de la clase
private:
	string name;
	long long accnumber;
	char type[10];
	long long amount = 200;
	long long tot = 0;

	// Variables Publicas
public:
	// Funcion para establecer los datos de la persona
	void setvalue()
	{
		cout << "Ingresar el nombre\n";
		cin.ignore();

		// Para tener espacios en la cadena
		getline(cin, name);

		cout << "Ingrese el nùmero de la cuenta\n";
		cin >> accnumber;
		cout << "Ingrese el tipo de cuenta\n";
		cin >> type;
		cout << "Ingrese el saldo\n";
		cin >> tot;
	}

	// Funcion para mostrar los datos
	void showdata()
	{
		cout << "Nombre:" << name << endl;
		cout << "Nùmero de Cuenta:" << accnumber << endl;
		cout << "Tipo de cuenta:" << type << endl;
		cout << "Saldo:" << tot << endl;
	}

	// Funcion para depositar el importe
	void deposit()
	{
		cout << "\nIngrese la cantidad a depositar: \n";
		cin >> amount;
	}

	// Funcion para mostrar el importe del saldo
	void showbal()
	{
		tot = tot + amount;
		cout << "\nEl saldo total es: " << tot;
	}

	// Funcion para retirar el dinero
	void withdrawl()
	{
		int a, avai_balance;
		cout << "Ingrese el importe a retirar\n";
		cin >> a;
		avai_balance = tot - a;
		cout << "El saldo disponibles es" << avai_balance;
	}
};

// Driver Code
int main()
{
	// Objeto de la clase
	Bank b;

	int choice;

	// Bucle while

	while (1) {
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~BIENVENIDO~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~\n\n";
		cout << "Ingrese su elecciòn\n";
		cout << "\t1. Ingrese nombre, nùmero de cuenta, "
			<< " tipo de cuenta,\n";
		cout << "\t2. Consulta de saldo\n";
		cout << "\t3. Depositar dinero\n";
		cout << "\t4. Mostrar el saldo total\n";
		cout << "\t5. Retirar dinero\n";
		cout << "\t6. Cancelar\n";
		cin >> choice;

		// Opciones para seleccionar
		switch (choice) {
		case 1:
			b.setvalue();
			break;
		case 2:
			b.showdata();
			break;
		case 3:
			b.deposit();
			break;
		case 4:
			b.showbal();
			break;
		case 5:
			b.withdrawl();
			break;
		case 6:
			exit(1);
			break;
		default:
			cout << "\nOpcion no vàlida\n";
		}
	}
}
