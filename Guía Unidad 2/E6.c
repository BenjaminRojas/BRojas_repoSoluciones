#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define fila 7
#define columna 24

void rellenar_la_matriz(int matriz[fila][columna]){
	
	srand(time(NULL));
	int temperatura;
	
	for(int i=0; i<fila; i++){
		
		for(int j=0; j<columna; j++){
			temperatura = 1 + (rand() %32);
		
			matriz[i][j] = temperatura;
		}
	}
}

void imprimir_valores_matriz(int matriz[fila][columna]){
	
	printf("La matriz con las temperaturas es la siguiente: \n\n");
	
	for (int i=0; i<fila; i++){
		
		for (int j=0; j<columna; j++){
			printf ("\t [%d] ",matriz[i][j]);
		}
	printf ("\n");
	}
}

void grados_por_dia(int matriz[fila][columna]){
	
	int temperatura_maxima, temperatura_minima;
	
	for(int i=0; i<fila; i++){
		
		temperatura_maxima = 0;
		temperatura_minima = 100;
		
		for(int j=0; j<columna; j++){
			
			if(temperatura_minima < matriz[i][j]){
			}
			
			else{
				temperatura_minima = matriz[i][j];
			}
			
			if(temperatura_maxima > matriz[i][j]){
			}
			
			else{
				temperatura_maxima = matriz[i][j];
			}
		}
		printf("\nLa temperatura máxima del día %d es: %d °C\n", i+1, temperatura_maxima);
		printf("La temperatura mínima del día %d es: %d °C\n", i+1, temperatura_minima);
	}
	printf("\n");
}

void grados_por_semana(int matriz[fila][columna]){
	
	int temperatura_maxima, temperatura_minima;
	
	for(int i=0; i<fila; i++){
		
		temperatura_maxima = 0;
		temperatura_minima = 100;
		
		for(int j=0; j<2; j++){
			
			if(temperatura_minima < matriz[i][j]){
			}
			
			else{
				temperatura_minima = matriz[i][j];
			}
			
			if(temperatura_maxima > matriz[i][j]){
			}
			
			else{
				temperatura_maxima = matriz[i][j];
			}
		}
		printf("\nLa temperatura máxima de la semana es: %d °C\n", temperatura_maxima);
		printf("La temperatura mínima de la semana es: %d °C\n", temperatura_minima);
	}
	printf("\n");
}

void promedio_por_dia(int matriz[fila][columna]){
	
	int sumatoria_temperaturas;
	
	printf("\n");
	
	for (int i=0; i<fila; i++){
		
		for (int j=0; j<columna; j++){
			sumatoria_temperaturas = (sumatoria_temperaturas +	matriz[i][j]);
		}
		sumatoria_temperaturas = (sumatoria_temperaturas/24);
		printf("El promedio de las temperaturas del día %d es: %d °C\n", i+1, sumatoria_temperaturas);
		
		sumatoria_temperaturas = 0;
	}
}

void temperatura_discriminante(int matriz[fila][columna]){
	
	int sumatoria_temperaturas;
	int contador_dias = 0;
	int promedio_por_dia = 0;
	
	printf("\n");
	
	for(int i=0; i<fila; i++){
		
		for(int j=0; j<columna; j++){
			sumatoria_temperaturas = (sumatoria_temperaturas + matriz[i][j]);
		}
		promedio_por_dia = (sumatoria_temperaturas/24);
		
		if(promedio_por_dia > 30){
			contador_dias = (contador_dias + 1);
		}
		sumatoria_temperaturas = 0;
	}
	printf("Los días en los que el promedio de la temperatura de, ese mismo día, es superior a 30 °C es(son): %d", contador_dias);
}

int main(){

	int matriz[fila][columna];

	rellenar_la_matriz(matriz);
	imprimir_valores_matriz(matriz);
	grados_por_dia(matriz);
	grados_por_semana(matriz);
	promedio_por_dia(matriz);
	temperatura_discriminante(matriz);
	
	return 0;
}
