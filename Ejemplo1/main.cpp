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
	imprimir(elementos, n);
	cout << endl;
	system("pause");


	return 0;
}