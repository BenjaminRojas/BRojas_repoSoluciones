/* Definir las primeras variables (Las cuales se utilizarán al final del cálculo). 
 * Señalar el mensaje que se imprimirá al final de las operaciones.
 * Definir las variables que se utilizarán en el cálculo de las horas trabajadas en el día, la cantidad de dinero entregado por hora.
 * Solicitar la cantidad de dinero ganado por hora y guardar este valor.
 * Iniciar un ciclo que se realice 6 veces y que pregunte la cantidad de horas trabajadas por día.
 * Guardar los valores obtenidos e ir sumándolos a otra variable (Esto se realiza para guardar la cantidad de horas trabajas en los 6 días).
 * Llamar a la variable "calcular sueldo total".
 * Llamar a la variable "sueldo total"
 * FIN
 */


#include <stdio.h>

	int calcular_sueldo_total (int total_de_horas, int dinero_por_hora){
		
		int sueldo_total = (total_de_horas * dinero_por_hora);
		return sueldo_total;
	}
	
	void imprimir_sueldo (int sueldo_total){
		
		printf ("\nEl sueldo total es: %d", sueldo_total);
	}

	int main ()
	
{
	int horas_por_dia, dinero_por_hora,sueldo_total;
	int total_de_horas = 0;
	int i=0;
	
		printf ("Ingrese la cantidad de dinero ganado por hora: ");
		scanf ("%d", &dinero_por_hora);
	
	for (i=1; i<=6; i++){
		
		printf ("Ingrese las horas trabajadas en el día %d :",i); 
		scanf ("%d", &horas_por_dia);
		
		total_de_horas = (total_de_horas + horas_por_dia);
	}
		
		sueldo_total = calcular_sueldo_total (dinero_por_hora, total_de_horas);
		imprimir_sueldo (sueldo_total);
		
	return 0;
}

