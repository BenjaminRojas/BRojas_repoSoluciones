/* INICIO.
 * Definir las variables a utlizar en el programa.
 * Consultar el número al cual de se desea calcular su raíz digital.
 * Crear un ciclo (while) en donde se realicen los calculos correspondientes para obtener la raíz digital.
 * Imprimir el valor de la raíz digital.
 * FIN. 
 */
#include <stdio.h>
#include <stdlib.h>

void
core(){
	
	int numero;
	int resto;
	int suma = 0;
	
	printf("Ingrese el número al cual desea calcularle su raíz digital: ");
	scanf("%d", &numero);
	
	while(numero > 0){
		
		resto = numero%10;
		numero = numero/10;
		
		suma = suma + resto;

		resto = suma%10;
		suma = suma/10;
		
		suma = suma + resto;
	}
	
	printf("La raíz digital del número ingresado es: %d", suma);		
}

int 
main(){
	
	core();
	
	return 0;
}

