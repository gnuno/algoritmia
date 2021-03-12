// Plantilla que muestra el resultado y ambos array
const stringTemplate = (equal, res, expected) =>
    `${equal.toString().toUpperCase()}: [${expected}] = [${res}]`;


// Funcion que compara ambos arrays
const isEqual = (a, b) =>
    a.length != b.length
        ? false
        : a.map((element, index) => (element == b[index] ? true : false));


// Funcion que compara el resultado y el esperado
const check = (res, expected) =>
    isEqual(res, expected)
        ? console.log(stringTemplate(true, res, expected))
        : console.log(stringTemplate(false, res, expected));


// Funcion usada para ordenar de manera ascendente
const compare = (a, b) => a - b;


// Funcion que corrobobora que sea impar
const isOdd = (n) => n % 2 != 0;


// Funcion que retorna el array con los impares ordenados
const sortArray = (array) => {
    let values = []; //array para los valores impares
    let keys = []; //array para los indices impares a ordenar

    array.map((element, index) => {
        if (isOdd(element)) {
            values.push(element);
            keys.push(index);
        }
    });

    values
        .sort(compare)
        .map((element, index) => (array[keys[index]] = element));

    return array;
};


// Casos de prueba
const main = () => {
    check(sortArray([5, 3, 2, 8, 1, 4]), [1, 3, 2, 8, 5, 4]);
    check(sortArray([]), []);
    check(sortArray([7, 5, 2, 6, 1, 3]), [1, 3, 2, 6, 5, 7]);
    check(sortArray([13, 33, 21, 81, 12, 45, 11]), [11, 13, 21, 33, 12, 45, 81]);
    check(sortArray([12, 22, 4, 6, 12, 46, 16]), [12, 22, 4, 6, 12, 46, 16]);
    check(sortArray([13, 1, 7, 5, 15, 17, 161]), [1, 5, 7, 13, 15, 17, 161]);
};

main();
