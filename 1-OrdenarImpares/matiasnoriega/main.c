#include <stdlib.h>
#include <stdio.h>

/*
 * Autor: Matías Noriega
 * Fecha: 17/03/2021
 */
void ordenar(int tamano_array, int *array){

	/* Si el tamaño del array es mayor a 0 continuamos*/
	if(tamano_array > 0){
		
		/* Mostramos el Array desordenado en pantalla*/
		printf("\n\nArray Desordenado: \n");
		for(int m = 0; m < tamano_array; m++){
			printf("%d ", array[m]);
		}
		/* Recorremos cada posición del array en cuestión */
		for(int k = 0; k < tamano_array; k++){
	
			/*
			 * Verificamos que el número de la posición k
			 * no sea par o cero, en ambos casos el resto 
		 	 * de la división por 2 será 0.
			 */

			if(array[k] % 2 != 0){

				/* Recorremos las otras posiciones del array buscando 
				 * números impares para ordenar de manera ascendente
				 */	
				for(int j = k +1; j < tamano_array; j++){
	
					int aux;
	
					/* Si hallamos un número menor al de la posición k
					 * y que no sea cero o par, lo intercambiamos.
					 */
					if(array[k] > array[j] && array[j] % 2 != 0){
						aux = array[k];
						array[k] = array[j];
						array[j] = aux;
					}
				}
			}	
		}
	
		/* Mostramos el array ordenado en pantalla */
		printf("\nArray Ordenado:\n");
		for(int n = 0; n < tamano_array; n++){
			printf("%d ", array[n]);
		}	
	}else{
		printf("[]");
	}

}

int main() {

	/* Tenés array de números. Ordená los impares de forma ascendente 
	 * y dejá los pares en su lugar. El cero es par así que no lo muevas. 
	 * Si tenés un array vacío, devolvé el array. */
	
	/* Lote de Arrays de Prueba*/
	int array_1[6] = {5, 3, 2, 8, 1, 4};
	int array_2[] = {7, 5, 2, 6, 1, 3};
	int array_3[7] = {13, 33, 21, 81, 12, 45, 11};
	int array_4[] = {12, 22, 4, 6, 12, 46, 16};
	int array_5[7] = {13, 1, 7, 5, 15, 17, 161};
	
	/* Llamamos a la función ordenar que mostrará el resultado en pantalla 
	 * Pasamos el tamaño del array de manera directa o con un pequeño 
	 * calculo como ejemplo
	 */
	ordenar(6,array_1);
	ordenar(sizeof(array_2)/sizeof(int), array_2);
	ordenar(7, array_3);
	ordenar(sizeof(array_4)/sizeof(*array_4),array_4);
	ordenar(7, array_5);

	return 0;
}
