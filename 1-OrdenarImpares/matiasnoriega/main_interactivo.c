#include <stdlib.h>
#include <stdio.h>

/*
 * Autor: Matías Noriega
 * Fecha: 17/03/2021
 */
void ordenar(int tamano_array, int *array){
	
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
	for(int n = 0; n < tamano_array; n++){
		printf("%d ", array[n]);
	}

}

int main() {

	/* Tenés array de números. Ordená los impares de forma ascendente y dejá los pares en su lugar. 
	 * El cero es par así que no lo muevas. 
	 * Si tenés un array vacío, devolvé el array. */
	
	/* Solicitamos el tamaño del Array*/	
	int tamano_array;
	printf("Ingrese tamaño del array: \n");
	scanf("%d", &tamano_array);
	
	/* Si el tamaño fuese igual o menor a cero, devolvemos error*/
	if(tamano_array <= 0){
		perror("[]");
		exit(EXIT_FAILURE);
	}
	/* Solicitamos los números que componen el array*/
	int array_desordenado[tamano_array];
	printf("Ingrese los números que componen el array, separados por un espacio y presione ENTER: \n");
	for(int i = 0; i < tamano_array; i++){
		scanf("%d", &array_desordenado[i]);
	}
	
	/* Llamamos a la función ordenar que mostrará el resultado en pantalla */
	printf("\n\nArray ordenado\n");
	ordenar(tamano_array, array_desordenado);

	return 0;
}
