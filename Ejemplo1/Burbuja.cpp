#include "Header.h"

using namespace std;

void burbuja(int elementos[], int n) {
	if (n == 1)
		return;
	else {
		for (int i = 0; i < n - 1; i++) {
			if (elementos[i] > elementos[i + 1]) {
				swap(elementos[i], elementos[i + 1]);
			}
		}
	}
	burbuja(elementos, n - 1);
}