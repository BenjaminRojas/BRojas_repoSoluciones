#include <stdio.h>
#include <stdlib.h>

void recorrer_la_matriz(int fila,int columna, int matriz[fila][columna]){
	
	for(int i=0; i<fila; i++){
		
		for(int j=0; j<columna; j++){
			printf ("Ingrese el valor correspondiente a la coordenada (%d) , (%d): ",i, j);
			scanf ("%d",&matriz[i][j]);
		}
		system("clear");
	}
}	

void imprimir_valores_matriz(int fila, int columna, int matriz[fila][columna]){
	
	printf("La matriz equivale a: \n\n");
	
	for (int i=0; i<fila; i++){
		
		for (int j=0; j<columna; j++){
			printf (" [%d] ",matriz[i][j]);
		}
		printf ("\n");
	}
}

void voltear_matriz(int fila, int columna ,int matriz[fila][columna]){
	
	printf ("\n");
	printf("La matriz volteada equivale a: \n\n");
	
	for (int i=fila-1; i>=0; i--){
		
		for (int j=0; j<columna; j++){
			printf(" [%d] ",matriz[i][j]);
		}
		printf ("\n");
	}
}

int main(){
	
	int fila,columna;
	
		printf ("Ingrese el tamaño equivalente al largo de la fila: ");
		scanf ("%d",&fila);
		printf ("Ingrese el tamaño equivalente al largo de la columna: ");
		scanf ("%d",&columna);
		
		system("clear");
		
		int matriz[fila][columna];
		
		recorrer_la_matriz(fila, columna, matriz);
		imprimir_valores_matriz(fila, columna, matriz);
		voltear_matriz(fila, columna, matriz);
		
	return 0;
}
