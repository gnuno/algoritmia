import java.util.Arrays;
import java.util.List;
import java.util.Random;
import java.util.stream.Collectors;

class Resultado {
    public static Integer getTercerMayor(List<Integer> array) {
        try {
            System.out.println("Array ingresado:" + array);
            // Verifica si el array excede el limite de elementos establecido
            if (array.size() > 104)
                throw new IllegalArgumentException("Longitud de array excedida");
            // Si el array contiene un solo elemento devuelve ese como mayor
            if (array.size() == 1)
                return array.get(0);
            // Si el array contiene dos elementos, los compara y devuelve el mayor
            if (array.size() == 2)
                return array.get(0) > array.get(1) ? array.get(0) : array.get(1);

            // Genera el stream para ordenar el array y eliminar los repetidos
            List<Integer> orderedAndDistinct = array.stream().sorted((n1, n2) -> {
                // Valida que cada elemento cumpla con la condición establecida
                if (-231 > n1 || 230 < n1 || -231 > n2 || 230 < n2)
                    throw new RuntimeException("Elementos no permitidos en el array");
                if (n1 > n2)
                    return -1;
                return 1;
            }).distinct().collect(Collectors.toList());

            // Verifica si el array resultante tiene más de 2 elementos
            if (orderedAndDistinct.size() > 2) {
                // Retorna el tercer elemento ergo el tercer mayor
                return orderedAndDistinct.get(2);
                // Verifica si el array resultante tiene 2 elementos
            } else if (orderedAndDistinct.size() == 2) {
                // Retorna el segundo elemento ergo el tercer mayor
                return orderedAndDistinct.get(1);
            } else {
                // Retorna el primer elemento ergo el tercer mayor
                return orderedAndDistinct.get(0);
            }
        } catch (Exception e) {
            System.out.println(e.getMessage());
            return 0;
        }
    }
}

// Clase generadora de arrays
class GenerateArray {
    // Método estático que genera un array dependiendo el tamaño recibido, sus
    // elementos cumplen con la condición establecida
    public static List<Integer> buildRandomArray(Integer size) {
        Integer[] array = new Integer[size];
        Random random = new Random();
        Integer max = 231;
        Integer min = -232;
        for (int i = 0; i < array.length; i++) {
            int number = random.nextInt(max - min) + min;
            array[i] = number;
        }
        return Arrays.asList(array);
    }

    public static List<Integer> arrayWithOneRepeatedNum(Integer size, Integer toBeRepeated) {
        Integer[] array = new Integer[size];
        if (toBeRepeated > 230 || toBeRepeated < -231)
            throw new IllegalArgumentException("Wrong toBeRepeated");
        for (int i = 0; i < array.length; i++) {
            array[i] = toBeRepeated;
        }
        return Arrays.asList(array);
    }
}

public class App {
    public static void main(String[] args) throws Exception {
        System.out.println("Tercer mayor: " + Resultado.getTercerMayor(Arrays.asList(1)));
        System.out.println("Tercer mayor: " + Resultado.getTercerMayor(Arrays.asList(1, 19)));
        System.out.println("Tercer mayor: " + Resultado.getTercerMayor(Arrays.asList(29, 19)));
        System.out.println("Tercer mayor: " + Resultado.getTercerMayor(Arrays.asList(2, 2, 3, 1)));
        System.out.println("Tercer mayor: " + Resultado.getTercerMayor(Arrays.asList(13, 33, 21, 81, 12, 45, 11)));
        System.out.println("Tercer mayor: " + Resultado.getTercerMayor(Arrays.asList(13, 1, 7, 5, 15, 17, 161)));
        System.out.println("Tercer mayor: " + Resultado.getTercerMayor(Arrays.asList(1, 2, -1, -8, -3)));
        System.out.println("Tercer mayor: " + Resultado.getTercerMayor(Arrays.asList(232, 2, -1, -8, -231)));
        System.out.println("Tercer mayor: " + Resultado.getTercerMayor(Arrays.asList(13, 1, 7, 5, 15, 17, 161)));
        System.out.println("Tercer mayor: " + Resultado.getTercerMayor(GenerateArray.buildRandomArray(104)));
        System.out.println("Tercer mayor: " + Resultado.getTercerMayor(GenerateArray.buildRandomArray(105)));
        System.out
                .println("Tercer mayor: " + Resultado.getTercerMayor(GenerateArray.arrayWithOneRepeatedNum(104, 230)));
    }
}
