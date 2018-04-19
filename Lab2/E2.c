/* Definir la variable número.
 * Solicitar el número al cual se le desea sacar su "pirámide" (Debe ser mayor o igual que 1 y menor o igual que 9, si no lo es, no se calculará la pirámide).
 * Crear un ciclo que tenga dos ciclos más adentro y definir las condiciones deseadas.
 * FIN.
 */


#include <stdio.h>

	int main ()
{
	int numero;
	
	printf ("Ingrese un número que vaya del 1 al 9 (incluyéndolos): ");
	scanf ("%d", &numero);
	
	if (numero > 9 || numero < 1){
		
		printf ("\nEl número ingresado no es válido");
	}
	
	else {	
			
		for (int i=1; i<=numero; i++){
			
			for (int j=1; j<=i; j++){
			
				printf ("%d", j);
			}
			
			for (int k=i; k>1; k--){
				
				printf ("%d", k-1);
			}
			
			printf ("\n");
			
		}
	}
	return 0;
}

