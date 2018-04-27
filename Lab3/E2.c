/* Solicitar la cantidad de grados celcius y guardar dicho valor.
 * Definir la función termómetro, la cual funcionará con "celcius".
 * Iniciar un ciclo que termine en la cantidad de grados celcius ingresados y que imprima "-".
 * Indicar que el último guion será reemplazado con un "*".
 * Imprimir el valor en grados celcius indicado por el usuario anteriormente.
 * FIN.
 */


#include <stdio.h>

	int termometro (int celcius){
		
		int i=0;
		
		celcius = (celcius - 1);
		
		for (i=0; i<=celcius; i++){
		
		printf ("-");
	}
	
		printf ("*");
		
		return celcius;
}

	int main ()
{
	int celcius;
	
	printf ("Ingrese la temperatura en grados celcius: ");
	scanf ("%d", &celcius);
	
	printf ("0         10        20        30        40        50\n");
	printf ("|         |         |         |         |         |\n");

	termometro (celcius);
	
	printf ("\nLa temperatura es: %d °C", celcius);
	
	return 0;
}

