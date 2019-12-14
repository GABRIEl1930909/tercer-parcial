/*Universidad Politecnica de Tulancingo
Ingenieria en Electronica y Telecomunicaciones 
Logica de programacion 
Gabriel Gayosso Trejo
Programa para listar los simbolos y codigo ascii imprimible
*/

#include "pch.h"

int main()
{
	//ASCII de imprimibles
	unsigned char cara = 32;
	while (cara < 128) {
		printf("El valor %d o %x es el simbolo %c\n", cara, cara, cara);
		cara = cara + 1;
	}
	//Jeranquia de las operaciones 
	printf("no es lo mismo %f que %f\n", 7.0 + 3.0 / 2.0, (7.0 + 3.0) / 2.0);

}

