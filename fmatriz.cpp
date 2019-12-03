//Universidad Politecnica de Tulancingo
//Loggica de Programacion
//Gabriel Gayosso Trejo
//Ing.Electronica y Telecomunicaciones
//Este codigo no9s muestra los numeros de manera secuencial

#include <stdlib.h>
#include <stdio.h>

const int n = 4;

void Captura(int matriz[n][n]) {
	int ren = 0, col = 0;
	while (ren < n) {
		while (col < n) {
			printf("cptura el elemento [%d,%d] ", ren, col);

			scanf_s("%d", &matriz[ren][col]);
			col++;
		}
		ren++;
	}
void llenado(int matriz[n][n]); {
		int ren = 0, col;
		int seq = 1;
		col = 0;
		while (col < n) {
			matriz[ren][col] = seq;
			seq++;
			col++;
		}
		ren++;col = 0;

	}



	void muestra(int matriz[n][n]); {

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

	int main(); {
		int cuadro[n][n];
		char rspt;
		printf("desea capturar (S/N): ");
		rspt = getchar();
		if (rspt == 'S' || rspt == 's') {
			Captura(cuadro);

		}


		else {
			llenado(cuadro);
		}
		muestra(cuadro);

	}
}