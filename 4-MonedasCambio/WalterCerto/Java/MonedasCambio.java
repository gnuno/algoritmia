package Java;
import java.util.ArrayList;
import java.util.List;
/* Monedas de Cambio:
    - El objetivo de este desafio es encontrar el 
    mínimo número de monedas que se necesitan para cambiar el valor de input (INTEGER) en monedas de denominación 1, 5, y 10.
    - El INPUT consiste en un entero simple M, 
    y la salida es otro numero entero que llamaremos K 
    que será la cantidad necesarias de monedas de las denominaciones mencionadas anteriormente para completar M.

 - Ejemplo 1
Input: 2
Output: 2
Explicación: 2 = 1 + 1
 - Ejemplo 2
Input: 28
Output: 6
Explicacion: 10 + 10 + 5 + 1 + 1 + 1

1 < M < 130
*/

class CambioMonedas {

    public static void main(String[] args) {
        Integer m, k=0;
        final Integer M1 = 1, M5 = 5, M10 = 10;
        List<Integer> explicacion = new ArrayList<Integer>();

        if(args != null && args.length > 0){
            m = Integer.valueOf(args[0]);
        }else{
            m = (int) Math.round(Math.random()*130)+1;
        }

        System.out.println("Input: " + m);
        
        while(m>=M1){
            if(m>=M10) {m -= M10; explicacion.add(M10);}
            else if(m>=M5) {m -= M5; explicacion.add(M5);}
            else /*if(m>=M1)*/ {m -= M1; explicacion.add(M1);}

            k+=1;
        }

        System.out.println("Output: " + k);
        System.out.println("Explicacion: ");
        for(int i=0; i<explicacion.size(); i++){
            System.out.print(explicacion.get(i));
            if (explicacion.size()-1>i)System.out.print(" + ");
        }


    }
}
 