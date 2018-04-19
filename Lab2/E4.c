/* Declarar las variables a utilizar.
 * Declarar que el puntaje antes de 5 fechas es 0.
 * Iniciar un  ciclo que se repita 5 veces.
 * Solicitar la cantidad de goles realizados por los gloriosos.
 * Solicitar la cantidad de goles realizados por el otro equipo.
 * Declarar que si la cantidad de goles realizados por los gloriosos es mayor que la cantidad de goles realizados por el otro equipo, se le sumarán 3 puntos al puntaje total de los gloriosos.
 * Declarar que si la cantidad de goles realizados por los gloriosos es igual que la cantidad de goles realizados por el otro equipo, se le sumará 1 punto al puntaje total de los gloriosos.
 * Declarar que si la cantidad de goles realizados por los gloriosos es menor que la cantidad de goles realizados por el otro equipo, se le sumarán 0 puntos al puntaje total de los gloriosos.
 * Imprimir el puntaje obtenido por los gloriosos después de 5 fechas. 
 * FIN
 */


#include <stdio.h>

	int main()
{
	int goles_de_los_gloriosos, goles_del_otro_equipo;
	int i=0;
	int Puntaje;
	
	Puntaje = 0;
	
	for (i = 1 ; i <= 5 ; i++){
		
	printf ("\nIngresar la cantidad de goles de los gloriosos en el partido: ");
	scanf ("%d", &goles_de_los_gloriosos);
	
	printf ("Ingresar la cantidad de goles del otro equipo en el partido: ");
	scanf ("%d", &goles_del_otro_equipo);

		
		if (goles_de_los_gloriosos > goles_del_otro_equipo){
			Puntaje = Puntaje + 3;
		}
		
		if (goles_de_los_gloriosos == goles_del_otro_equipo){
			Puntaje = Puntaje + 1;
		}

		if (goles_de_los_gloriosos < goles_del_otro_equipo){
			Puntaje = Puntaje + 0;
		}

	}
	
	printf ("\nEl puntaje obtenido por los gloriosos en las 5 fechas disputadas es de: %d", Puntaje);
	
	return 0;
}

