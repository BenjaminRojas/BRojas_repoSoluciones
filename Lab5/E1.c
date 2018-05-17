/* INICIO.
 * Definir las variables a utilizar en el programa.
 * Preguntar por quien se desea apostar (A o B).
 * Generar dos números aleatorios.
 * Comparar la opción ingresada con un número aleatorio.
 * Definir los "if" diciendo si el apostador ha ganado o no.
 * Luego mostrar un contador de veces ganadas y perdidas. 
 * Consultar si desea seguir apostando.
 * FIN.
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void 
core (){
	
	int numero_aleatorio_A;
	int numero_aleatorio_B;	
	char opcion;
	char seguir = 'S';
	int contador_ganadas = 0;
	int contador_perdidas = 0;
	
	while(seguir == 'S'){
	
	printf("\n¿Deseas apostar por A o por B?\n");
	printf("Si deseas apostar por A, presiona A\n");
	printf("Si deseas apostar por B, presiona B\n");
	printf("Apuestas por: ");
	scanf("%c", &opcion);
	
	srand(time(NULL));
	numero_aleatorio_A = (rand() %10);
	numero_aleatorio_B = (rand() %10);
		
	printf("Número aleatorio de A: %d\n", numero_aleatorio_A);
	printf("Número aleatorio de B: %d\n", numero_aleatorio_B);
	
		if(opcion == 'A'){
			
			if(numero_aleatorio_A > numero_aleatorio_B){
				
				printf("HAS GANADO");
				contador_ganadas++;
			}
			
			else if(numero_aleatorio_A < numero_aleatorio_B){
				
				printf("HAS PERDIDO");
				contador_perdidas++;
			}
			
			else if(numero_aleatorio_A == numero_aleatorio_B){
				
				printf("HAY UN EMPATE");
			}
		}
		
		else if(opcion == 'B'){
			
			if(numero_aleatorio_B > numero_aleatorio_A){
				
				printf("HAS GANADO");
				contador_ganadas++;
			}
			
			else if(numero_aleatorio_B < numero_aleatorio_A){
				
				printf("HAS PERDIDO");
				contador_perdidas++;
			}
			
			else if(numero_aleatorio_A == numero_aleatorio_B){
				
				printf("HAY UN EMPATE");
			} 			
		}
	
		printf("\nLlevas %d partidas ganadas\n", contador_ganadas);
		printf("Llevas %d partidas perdidas\n", contador_perdidas);
			
		printf("\n¿Deseas apostar nuevamente?\n");
		printf("Presiona 'S' si quieres hacerlo o presiona 'N' para salir\n");
		scanf(" %c", &seguir);
		
	while(getchar()!='\n');
	}
}

int 
main(){
	
	core();
	return 0;
}

