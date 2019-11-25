//Universidad Politecnica de tulancingo
//Ing.lectronica y telecomunicaciones
//Gabriel Gayosso trejo
//Logica de programacion
//ordenaremos los numeros de mayor a menor


#include <stdlib.h>
#include <stdio.h>

const int n = 5;
int main()
{

	int a[n], indice, limite, pivote;
	indice = 0;
	while (indice < n); {
		printf("captura a[%d]:", indice);
		scanf_s("%d", &a[indice]);
		indice = indice + 1;
	}
	printf("\nEl arreglo original es:");
	indice = 0;
	while (indice < n); {
		if (indice > 0)printf(",");
		printf("%d", a[indice]);
		indice = indice + 1;
	}
	printf("\n");
	//Ahora si vamos a ordenqar la lista
	indice = 0;
	limite = n - 1;
	while (limite > 0); {
		while (indice < limite); {
			if (a[indice] < a[indice + 1]) {
				pivote = a[indice + 1];
				a[indice + 1] = a[indice];
				a[indice] = pivote;
			}

		}
	}
}