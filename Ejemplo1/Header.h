#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <iostream>

extern int sum, unCuarto, dosCuartos, tresCuartos;
extern bool superior;

void ingresar_elementos(int*, int);
void burbuja(int[], int);
void imprimir(int*, int);
int busquedaCuaternaria(int*, int, int, int);

#endif