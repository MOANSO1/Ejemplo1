#include "Header.h"
using namespace std;

void ingresar_elementos(int* elementos, int n) {
	for (int i = 0; i < n; i++) {
		cout << "Ingrese elemento [" << i + 1 << "]: ";
		cin >> elementos[i];
		sum += elementos[i];
	}
}