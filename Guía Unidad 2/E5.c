#include <stdio.h>
#include <stdlib.h>

void rellenar_la_matriz(int fila,int columna,int matriz[fila][columna]){
	
	for (int i=0; i<fila; i++){
		
		for (int j=0; j<columna; j++){
			printf ("Ingrese el valor correspondiente a la coordenada (%d) , (%d): ",i, j);
			scanf ("%d", &matriz[i][j]);
		}
		system("clear");
	}
}

void imprimir_valores_matriz(int fila,int columna,int matriz[fila][columna]){
	
	printf ("La matriz original corresponde a: \n\n");
		
		for (int i=0; i<fila; i++){
		
			for (int j=0; j<columna; j++){
				printf (" [%d] ",matriz[i][j]);
			}
		printf ("\n");
		}
}

void imprimir_valores_matriz_traspuesta(int fila,int columna,int matriz[fila][columna]){
	
	printf ("\nLa matriz traspuesta corresponde a: \n\n");
	
		for (int i=0; i<columna; i++){
			
			for (int j=0; j<fila; j++){
				printf (" [%d] ",matriz[j][i]);
			}
		printf ("\n");
	}
}

int main()
{
	int columna,fila;
	
	printf ("Ingrese el largo del cual desea crear la fila: ");
	scanf ("%d",&fila);
	
	printf ("Ingrese el largo del cual desea crear su columna: ");
	scanf ("%d",&columna);
	
	system("clear");
	
	int matriz[fila][columna];
	
	rellenar_la_matriz(fila,columna,matriz);
	imprimir_valores_matriz(fila,columna,matriz);
	imprimir_valores_matriz_traspuesta(fila,columna,matriz);
		
	return 0;
}



