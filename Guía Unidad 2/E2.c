#include <stdio.h>
#include <stdlib.h>

void rellenar_la_matriz(int dimension_matriz){
	
	int matriz[dimension_matriz][dimension_matriz];
	
	printf("La matriz creada equivale a: \n\n");
	
	for (int i=0; i<dimension_matriz; i++){
			
		for (int j=0; j<dimension_matriz; j++){		
			
			if (i == j){
					matriz[i][j] = 1;
				}
	
			else{				
				matriz[i][j] = 0;
				}	
			printf (" [%d] ", matriz[i][j]);
		}	
	printf ("\n");
	}
}	
	
int main(){
	
	int dimension_matriz;

	printf("Ingrese el tamaño de la matriz: ");
	scanf("%d", &dimension_matriz);
	
	rellenar_la_matriz(dimension_matriz);
	
	return 0;
}
		
		
