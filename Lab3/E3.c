/* Indicar las variables que se utilizarán en el programa.
 * Indicar que la primera cuota a pagar es $10.
 * Iniciar un ciclo que vaya multiplicando por 2 el valor anterior y así ir obteniendo las cuotas a pagar los siguientes meses.
 * Imprimir todas las cuotas de los siguientes meses.
 * FIN.
 */


#include <stdio.h>

	int cuotas (){
	
		int i=0;
		float cuota = 10;
		float siguiente_cuota = 10;
		
		printf ("La primera cuota a pagar es: $%.0f", cuota);

	for (i=2; i<=20; i++){
		
		siguiente_cuota = (siguiente_cuota * 2);
		
		printf ("\nLa cuota a pagar el siguiente mes es: $%.0f", siguiente_cuota);
		
	}
	
	return siguiente_cuota;
}

	int main()
{
	cuotas ();
	
	return 0;
}

