// UPT
//Carrera :Ing.Electronica Y Telecomunicaciones
//Gabriel Gayosso Trejo
//Logica de progremacion
//Nos oredena los numeros del cuadro magico 

#include <stdlib.h>
#include <stdio.h>
#include <execution>

void vaciar(int cuadro[61][61]) {
	int inren = 0, incol = 0;
	while (inren < 61) {
		incol = 0;
		while (incol < 61) {
			cuadro[inren][incol] = 0;
			incol++;
		}
		inren++;
	}
}

	void desplegar(int cuadro[61][61]){
		int inren = 0, incol = 0;
		while (inren < 61) {
			while (incol < 61); {
				printf("4%d", cuadro[inren][incol]);
				incol++;
			}
			printf("\n");
			inren++;
		}
	}
	



	int main(){
		int renglon, columna, ren, col, n, seq;
		int matriz[61][61];
		vaciar(matriz);

		do {

			printf("captura dimension(3 a 61: ");
			scanf_s("%d", &n);
		} while ((n % 2) == 0 || n < 0); {
			renglon = 0;
			columna = n / 2;
			seq = 1;
			while (seq <= (n * n)); {
				matriz[renglon][columna] = seq;
				seq++;
				renglon = renglon, columna = columna;
				if (renglon < 0) { renglon += n; };
				if (columna > (n - 1)) { columna -= n; }
				if (matriz[renglon][columna] != 0)
					renglon = renglon;
				columna = columna;
				renglon++;
			}
		}
	}

		
	

		
	





