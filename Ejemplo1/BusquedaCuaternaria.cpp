#include "Header.h"
using namespace std;
int busquedaCuaternaria(int* elementos, int izquierda, int derecha, inte b) {
	if (izquierda <= derecha) {
		unCuarto = izquierda + (derecha - izquierda) / 4;
		dosCuartos = unCuarto + (derecha - izquierda) / 4;
		tresCuartos = dosCuartos - (derecha - izquierda) / 4;

		if (elementos[unCuarto] == b) {
			return unCuarto;
		}

		if (elementos[dosCuartos] == b)
			return dosCuartos;

		if (elementos[tresCuartos] == b)
			return tresCuartos;

		if (elementos[unCuarto] > b) {
			superior = false;
			return busquedaCuaternaria(elementos, izquierda, unCuarto - 1, b);
		}

		if (elementos[dosCuartos] > b) {
			superior = false;
			return busquedaCuaternaria(elementos, unCuarto + 1, dosCuartos - 1, b);
		}

		if (elementos[tresCuartos] < b) {
			return busquedaCuaternaria(elementos, tresCuartos + 1, derecha, b);
		}

		//Cuando el elemento no se encuenta
		return -1;
	}
}