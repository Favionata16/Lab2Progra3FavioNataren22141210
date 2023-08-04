#include <iostream>
#include <vector>
using namespace std;

void imprimirArray(const vector<int>& arr) {
	for (int num : arr) {
		cout << num << " ";
	}
	cout << endl;
}

vector<int> generarFilaPascal(const vector<int>& anterior) {
	vector<int> nuevaFila;
	nuevaFila.push_back(1);
	for (int i = 0; i < anterior.size() - 1; ++i) {
		nuevaFila.push_back(anterior[i] + anterior[i + 1]);
	}
	nuevaFila.push_back(1);
	return nuevaFila;
}

void generarTrianguloPascal(int iteraciones, const vector<int>& filaActual = { 1 }) {
	if (iteraciones == 0) {
		return;
	}
	imprimirArray(filaActual);
	vector<int> nuevaFila = generarFilaPascal(filaActual);
	generarTrianguloPascal(iteraciones - 1, nuevaFila);
}

void menu(int e);

void menu(int e)
{


	switch (e) {

	case 1: {

		break;
	}

	case 2: {
		cout << "\n\n----Ejercicio 2----";

		cout << "\n\n----Ejercicio 1----";
		int iteraciones;
		cout << "Ingrese el numero de iteraciones: ";
		cin >> iteraciones;

		if (iteraciones >= 1 && iteraciones <= 50) {
			generarTrianguloPascal(iteraciones);
		}
		else {
			cout << "El numero de iteraciones debe estar entre 1 y 50." << endl;
		}

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