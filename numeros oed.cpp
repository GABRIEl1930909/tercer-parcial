//Universidad Politecnica de Tulancingo
//Ing.Electronica y Telecomunicaciones
//Logica de programacion 
//Gabriel Gayosso Trejo
//Arturo Negrete M.
//Nos servira poara ordenar numeros de mayor a menor "ordenar numeros".


#include <stdlib.h>
#include <stdio.h>
const int n = 4;
int main()
{
	int matriz[n][n];
	int ren = 0, col = 0;
	while (ren < n) {
		while (col < n) {
			printf("cptura el elemento [%d,%d] ", ren, col);			

			scanf_s("%d", &matriz[ren][col]);
			col++;

		}

		ren++; col = 0;
	}
	ren = 0;
	while (ren < n) {
		col = 0;
		while (col < n) {
			printf("%4d", matriz[ren][col]);
			col++;
		}
		printf("\n");
		ren++;
	}
}