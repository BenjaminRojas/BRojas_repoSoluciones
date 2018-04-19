/* Declarar las variables a utilizar.
 * Preguntar la edad de Juanito en meses.
 * Preguntar el peso de Juanito.
 * Declarar la formula a utilizar para saber la cantidad de gotas que se le deben suministrar a Juanito si tiene 1 año o más.
 * Declarar la formula a utilizar para saber la cantidad de gotas que se le deben suministrar a Juanito si tiene menos de 1 año.
 * Declarar que si Juanito tiene 12 meses o más, la dosis diaria ha de suministrarse cada 24 horas.
 * Si se cumple lo anterior imprimir la cantidad de gotas que se le deben suministrar cada 24 horas.
 * Declarar que si Juanito tiene menos de 12 meses, la dosis diaria ha de dividirse en 3 dosis que serán suministradas cada 8 horas.
 * Si se cumple lo anterior imprimir la cantidad de gotas que se le deben suministrar cada 8 horas.
 * FIN
 */
 

#include <stdio.h>

	int main ()
	
{
	int edad_de_Juanito;
	float peso_de_Juanito, Dosis_diaria1, Dosis_diaria2;
	
	printf ("¿Cuál es la edad de Juanito expresada en meses?\n");
	scanf ("%d", &edad_de_Juanito);
	
	printf ("¿Cuál es el peso de Juanito?\n");
	scanf ("%f", &peso_de_Juanito);
	
	Dosis_diaria1 = (peso_de_Juanito * 5);
	Dosis_diaria2 = ((peso_de_Juanito * 5)/3);
	
	if (edad_de_Juanito >= 12){
		
		printf ("La cantidad de gotas que se le deben suministrar a Juanito cada 24 son: %f\n", Dosis_diaria1);
	}
	
	if (edad_de_Juanito < 12){
	
		printf ("La cantidad de gotas que se le deben suministrar a Juanito cada 8 horas son: %f\n", Dosis_diaria2);
	}
	
	return 0;
	
}
