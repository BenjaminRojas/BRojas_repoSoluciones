#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int dimension_matriz;
	int interruptor=1;

	printf("Ingrese el tamaño de la matriz: ");
	scanf("%d", &dimension_matriz);
	
		int matriz[dimension_matriz][dimension_matriz];
	
		for (int i=0; i<dimension_matriz; i++){
			
			for (int j=0; j<dimension_matriz; j++){
				
				printf("Ingrese el valor en la coordenada (%d) , (%d): ", i, j);
				scanf("%d", &matriz [i][j]);
			}
			printf("\n");
		}
		
		for (int i=0; i<dimension_matriz; i++){
			
			for (int j=0; j<dimension_matriz; j++){
				
				printf("[%d] ", matriz [i][j]);
			}
			printf("\n");
		}

		for(int i=0; i<dimension_matriz; i++){
		
			for(int j=0; j<dimension_matriz; j++){
				
				if(i!=j){
					
					if(matriz[i][j] != matriz[j][i]){
						interruptor=0;
					}
				}
			}
		}
	
		if (interruptor != 1){
			printf("\nLa matriz que ha generado es asimétrica");
		}
		
		else{
			printf("\nLa matriz que ha generado es simétrica");
		}
	
	return 0;
}
