#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int obtenerNumRandom() {
	return rand() % 1001 - 500;
}

void imprimirArray2(const vector<int>& arr) {
	for (int num : arr) {
		cout << num << " ";
	}
	
}

int buscarNumero2(const vector<int>& arr, int numero) {
	int comparaciones = 0;
	int izquierda = 0;
	int derecha = arr.size() - 1;

	while (izquierda <= derecha) {
		comparaciones++;
		int medio = izquierda + (derecha - izquierda) / 2;

		if (arr[medio] == numero) {
			return comparaciones;
		}

		if (arr[medio] < numero) {
			izquierda = medio + 1;
		}
		else {
			derecha = medio - 1;
		}
	}

	return -1;
}

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
		cout << "\n\n----Ejercicio 1----";

		srand(time(nullptr));  // Inicializar generador de números aleatorios

		const int n = 20;  // Tamaño del arreglo

		vector<int> arreglo(n);
		for (int i = 0; i < n; ++i) {
			arreglo[i] = obtenerNumRandom();
		}

		sort(arreglo.begin(), arreglo.end());  // Ordenar el arreglo

		

		int numeroABuscar;
		cout << "Ingrese el numero a buscar: ";
		cin >> numeroABuscar;

		int comparaciones = buscarNumero2(arreglo, numeroABuscar);

		cout << "Arreglo ordenado: ";
		imprimirArray(arreglo);

		if (comparaciones == -1) {
			cout << "El numero "<< numeroABuscar<<" no se encuentra en el arreglo." << endl;

			cout << "Numero de comparaciones realizadas: " << comparaciones << endl;

		}
		else {
			cout << "Número de comparaciones realizadas: " << comparaciones << endl;
		}

		break;
	}

	case 2: {
		cout << "\n\n----Ejercicio 2----";

		
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



