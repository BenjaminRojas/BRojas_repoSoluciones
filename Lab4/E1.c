/* INICIO.
 * Definir las variables a utilizar en la función int.
 * Definir una función que calcule el número a invertir utilizando un ciclo que contenga una condicional para que se arranque siempre y cuando el número ingresado sea distinto de 0.
 * En el ciclo se deberá utilizar función "mod" para calcular el resto del número ingresado.
 * Luego el número ingresado deberá dividirse en 10.
 * Esto se repetirá sucesivamente hasta que se cierre el ciclo.
 * Al final del ciclo llamar a la variable "resto" que tendrá el número invertido.
 * Definir la variable a usar en int main (numero a invertir).
 * Solicitar el número el cual se desea voltear y guardar el valor.
 * Enviar la variable de la función int main a la función main. De este modo se podrá realizar el cálculo con el número ingresado.
 * FIN.
 */


#include <stdio.h>

int numero_invertido (int numero_a_invertir){
	
		int resto;
		
		while (numero_a_invertir!=0){
	
		resto = (numero_a_invertir%10);
		numero_a_invertir = (numero_a_invertir/10);
		
		printf ("%d", resto);
		}
		
	return resto;
}

int main ()
{
	int numero_a_invertir;
	
	printf ("Ingrese el número el cual desea invertir: \n");
	scanf ("%d", &numero_a_invertir);

	numero_invertido (numero_a_invertir);
	
	return 0;
}

