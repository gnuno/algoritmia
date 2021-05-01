## Estaciones de Servicio

### Descripción
Vas a viajar a otra ciudad que está a `d` kilometros de distancia. Tu vehículo puede viajar `m` kilometros con un tanque de nafta, y empezas el viaje con el tanque lleno. A lo largo del viaje, vas a encontrar estaciones de servicio ubicadas en las distancias `parada1`, `parada2`, `parada3`,..., `paradaN`. Cual es el mínimo número de recargas de nafta que tenés que hacer para llegar a tu destino?

### Formato
**Formato de Entrada:** Vas a tener que crear una función que tome 4 argumentos
1. Un entero `d`
2. Un entero `m`
3. Un entero `n`
4. Un array de enteros `[parada1, parada2, parada3, ..., paradaN]`

**Formato de Salida:** Asumiento que la distancia entre las ciudades es de `d` kilometros, un vehículo puede viajar a lo sumo `m` kilometros con un tanque lleno, y que hay estaciones de servicio en las distancias `[parada1, parada2, parada3, ..., paradaN]` a lo largo de todo el camino, la función debe retornar el _número mínimo de veces que se debe cargar el tanque de nafta para llegar al destino_. Asumir que comienza el viaje con el tanque lleno. De ser imposible llegar a destino, la función debe retornar `-1`

#### Ejemplo 1
```
Input:
funcion(950, 400, 4, [200, 375, 550, 750]);
Output:
2
```
**Explicacion:** La distancia entre las ciudades es de 950 kilometros, el vehículo puede viajar hasta 400 kilometros con un tanque lleno. Eso alcanza para hacer 2 recargas de nafta: En la estación de servicio que está a 375 kilometros de distancia y en la estación de servicio que está a 750 kilometros de distancia. 2 es la cantidad mínima de recargas de nafta que debe hacer, ya que si hiciera solo una recarga no llegaría.

#### Ejemplo 2
```
Input:
funcion(10, 3, 4, [1, 2, 5, 9]);
Output:
-1
```
**Explicacion:** No puede llegar a la estación de servicio en el kilometro 9 ya que la anterior estación está muy lejos. Retorna -1 porque no puede llegar a destino.

#### Ejemplo 3
```
Input:
funcion(200, 250, 2, [100, 150]);
Output:
0
```
**Explicacion:** No hay necesidad de hacer recargas de nafta ya que el vehículo comienza con el tanque lleno y puede viajar por 250 kilometros en tanto el punto de destino está a tan solo 200 kilometros.

### Condiciones

1 < d < 10<sup>5</sup>

1 < m < 400

1 < n < 300

0 < `parada1` < `parada2` < ... < `paradaN` < d