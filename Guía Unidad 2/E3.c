#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int tamano_matriz;
	int arreglo [tamano_matriz];	
	int sumatoria_matriz=0;

	printf("Ingrese el tamaño de la matriz: ");
	scanf("%d", &tamano_matriz);
	
		int matriz[tamano_matriz][tamano_matriz];
	
		for (int i=0; i<tamano_matriz; i++){
			
			for (int j=0; j<tamano_matriz; j++){
				
				printf("Ingrese el valor en la coordenada (%d) , (%d): ", i, j);
				scanf("%d", &matriz [i][j]);
			}
			printf("\n");
		}
		
		for (int i=0; i<tamano_matriz; i++){
			
			for (int j=0; j<tamano_matriz; j++){
				
				printf("[%d] ", matriz [i][j]);
			}
			printf("\n");
		}
		
		for(int i=0; i<tamano_matriz; i++){
			
			arreglo[i]=0;
			
				for(int j=0; j<tamano_matriz; j++){

					arreglo [i] = arreglo [i] + matriz[i][j];
				}
		printf("\nLa sumatoria de la fila %d es: %d", i, arreglo [i]);
		}	
		
		for(int i=0; i<tamano_matriz; i++){
			
			sumatoria_matriz = sumatoria_matriz + arreglo [i];
		}
			printf("\nLa suma total de la matriz es: %d", sumatoria_matriz);

	return 0;
}
