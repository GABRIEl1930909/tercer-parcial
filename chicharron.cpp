
/*Universidad Politecnica de Tulancingo
Ingenieria en Electronica y Telecomunicaciones
Logica de programacion
gabriel gayosso trejo
Programa para:obtener dos valores utilizando la formula general (la chicharronero)

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
	float a, b, c;
	float x1, x2;
	printf("capturar a: ");
	scanf_s("%f", &a);
	printf("capturar b: ");
	scanf_s("%f", &b);
	printf("capturar c: ");
	scanf_s("%f", &c);
	if (b*b >= 4 * a*c) {
		x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
		printf("las raices del sistema: %f, %5.2f", x1, x2);
	}
	else {
		printf("la raiz no es real.");
	}

}

