#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

void menu(int e);

void menu(int e)
{


	switch (e) {

	case 1: {
		cout << "\n\n----Ejercicio 1----";
		break;
	}

	case 2: {
		cout << "\n\n----Ejercicio 2----";


		break;
	}

	case 3: {
		system("cls");
		cout << "Saliendo, hasta luego!" << endl;
		break;
	}

	default: {

		cout << "\nEsa opcion no existe!" << endl;
		system("pause");
		system("cls");
		break;
	}
	}
}

int main() {
	int x = 0;
	cout << "Hola bienvenido!\n";
	while (x != 3) {
		cout << "\n\n---- Menu ----\nLas opciones disponibles: \n1.Ejercicio 1 \n2.Ejercicio 2 \n3.salir \nIngrese opcion: ";
		cin >> x;
		menu(x);

	}
}