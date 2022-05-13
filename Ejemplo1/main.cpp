//Implemente el ordenamiento por Burbuja recursivamente, y luego implemente una Busqueda Cuaternaria

#include <iostream>
#include "header.h"

using namespace std;

int sum = 0, unCuarto, dosCuartos, tresCuartos;
bool superior = true;

int main()
{
	int n, b, posicionB;

	cout << "Ingrese el numero de elementos que va a ingresar: "; cin >> n;
	int* elementos = new int[n];

	ingresar_elementos(elementos, n);

	cout << "ORDENANDO LOS DATOS. . . " << endl;
	burbuja(elementos, n);

	cout << "\nELEMENTOS ORDENADOS: " << endl;
	//d
	imprimir(elementos, n);
	cout << endl;
	system("pause");
	system("cls");
	cout << "\nBUSQUEDA CUATERNARIA" << endl << endl;
	cout << "INGRESE UN ELEMENTO A BUSCAR: "; cin >> b;

	posicionB = busquedaCuaternaria(elementos, 0, n - 1, b);
	if (posicionB == -1)
		cout << "\a No se encontro el elemento buscado." << endl;
	else {
		cout << "\nEl elemento buscado esta en la posicion: " << posicionB + 1 << endl;
	}

	delete[] elementos;
	system("pause");
	return 0;
}