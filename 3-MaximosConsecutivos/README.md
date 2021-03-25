## Máximos Consecutivos

Dado un array A lleno de ceros y unos, tenés la posibilidad de cambiar K items del array de 0 a 1.

Devolvé el tamaño del sub-array mas largo (y contiguo) que solo contenga 1s.

### Ejemplo 1:

Input: `A = [1,1,1,0,0,0,1,1,1,1,0]`, `K = 2`

Output: `6`
#### Explicacion: 

[1,1,1,0,0,***1**,1,1,1,1,**1***]
Los números en negrita están cambiados de 0 to 1. El sub-array mas largo está en itálica.

### Ejemplo 2:

Input: `A = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1]`, `K = 3`

Output: `10`
#### Explicación: 

[0,0,***1**,1,1,1,1,1,1,1,1,**1***,0,0,0,1,1,1,1]
Los números en negrita están cambiados de 0 to 1. El sub-array mas largo está en itálica.
 

### Condiciones:
```
1 <= A.length <= 20000
0 <= K <= A.length
A[i] es 0 o 1
```
