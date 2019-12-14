/*
Programa: para analizar las diferentes partes de un programa en C y Hola al mumdo
Autor: karina Ibarra Aguilar Matricula: 1930180 
UNIVERSIADAD POLITECNICA DE TULANCINGO
Materia: Logica de programacion 
PROFESOR: ARTURO NEGRETE 
Carrera: ingenieria en Electronica y Telecomunicaciones 
*/

#include <iostream>
#include <string>

int a, b, total;
int suma() {
	return a + b;
}

int main()
{
	printf(" ¡ HOLA MUNDO !\n");
	a = 7; b = 6;
	total = suma();
	printf("\n resultado de sumar %d + %d es: %d\n", a, b, total);
}


