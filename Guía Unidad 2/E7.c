#include <stdio.h>
#include <stdlib.h>
#define fila 4
#define columna 5

void rellenar_la_matriz(int matriz[fila][columna]){
	
	for(int i=0; i<fila ;i++){
		
		for(int j=0; j<columna; j++){
			printf ("Ingrese el valor correspondiente a la coordenada (%d) , (%d): ",i,j);
			scanf ("%d", &matriz[i][j]);
		}
		system("clear");
	}
}

void imprimir_valores_matriz(int matriz[fila][columna]){
	
	printf("La matriz equivale a: \n\n");
	
	for (int i=0; i<fila; i++){
		
		for (int j=0; j<columna; j++){
			printf (" [%d] ",matriz[i][j]);
		}
	printf ("\n");
	}
}

void sumatoria_de_las_filas(int matriz[fila][columna]){
	
	int sumatoria=0;

		for(int i=0;i<fila;i++){
				
			for(int j=0;j<columna;j++){
			
				sumatoria = sumatoria + matriz[i][j];
			}
		printf("\nLa suma de la fila %d es: %d", i+1, sumatoria);
			sumatoria=0;
		}		
}

int main(){
	
	int matriz[fila][columna];
	
	rellenar_la_matriz(matriz);
	imprimir_valores_matriz(matriz);
	sumatoria_de_las_filas(matriz);
	
	return 0;
}
