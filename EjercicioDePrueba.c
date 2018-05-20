

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
