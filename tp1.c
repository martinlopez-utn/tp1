/*
 * Desarrollar un programa que permita calcular el valor de la funciรณn ๐(๐ฅ) 
 * para el valor de ๐ฅ ingresado y muestre su resultado por pantalla.
 * ๐(๐ฅ) = 3๐ฅ + 2
 */

#include <stdio.h>

int main (void)

{
	float valorx;
	float resultado;
	
	printf ("Ingrese el valor de x para la funcion ๐(๐ฅ) = 3๐ฅ + 2\n");
	scanf ("%f",&valorx);
 	resultado = 3 * valorx + 2 ;
 	
 	printf ("El valor de la funcion ๐(๐ฅ) = 3๐ฅ + 2 es %.2f redondeado con dos decimales\n", resultado );



	return 0;
}
