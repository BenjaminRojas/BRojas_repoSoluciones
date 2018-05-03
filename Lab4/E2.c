/* INICIO.
 * Definir una función float que realiace el cálculo de cuanto deberá recibir cada uno (Antonio, Juan y Manuel) de los $80.
 * Definir las variables a ocupar dentro de esta función.
 * Realizar los cálculos correspondientes para saber la cantidad de huevos a repartir, la cantidad de huevos que comerá Antonio (resto) y lo que recibirá cada uno producto de los $80 que "entregará" Manuel.
 * Definir una función int main que contenga las variables declaradas.
 * Realizar los cálculos para saber la cantidad de dinero querecibirá cada uno, enviando la variable a la función float.
 * Imprimir la cantidad de dinero que recibirán Juan, Manuel y Antonio.
 * FIN.
 */


#include <stdio.h>

float
divisionDinero (float amigoDeAntonio, float huevos){
	
	float huevos_a_repartir, resto, pago;
	
	huevos_a_repartir = (huevos/3); // 2.6 aproximadamente.
	resto = (amigoDeAntonio - huevos_a_repartir); // Representa la cantidad de huevos que comerá Antonio en total.
	pago = (resto * 10);
	
	return pago;
}

int main()
{
	//Antonio equivale a 8, ya que 8 huevos equivalen a $80, por lo tanto los $80 que está "pagando" Antonio equivalen a 8.
	
	float Antonio = 8;
	float Juan = 5;
	float Manuel = 3;
	float cantidad_de_huevos = 8;
	float dinero_de_Juan, dinero_de_Manuel, dinero_de_Antonio;
	
	dinero_de_Juan = divisionDinero (Juan, cantidad_de_huevos);
	dinero_de_Manuel = divisionDinero (Manuel, cantidad_de_huevos);
	dinero_de_Antonio = divisionDinero (Antonio, cantidad_de_huevos);
		
	printf ("La cantidad que Antonio le debe pagar a Juan es: $%.2f\n", dinero_de_Juan);
	printf ("La cantidad que Antonio le debe pagar a Manuel es: $%.2f\n", dinero_de_Manuel);
	printf ("La cantidad de dinero con la que se queda Antonio es: $%.2f", dinero_de_Antonio);
	
	return 0;
}

