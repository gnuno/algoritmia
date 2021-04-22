function ordenarImpares(array) {
  let desordenado = [...array];
  for (let i = 0; i < array.length; ++i) {
    let lastImpar = 0;
    let lastIndex = 0;
    for (let j = 0; j < array.length - i; j++) {
      if (array[j] % 2 !== 0) {
        if (array[j] < lastImpar) {
          let aux = array[j];
          array[j] = lastImpar;
          array[lastIndex] = aux;
        }
        lastIndex = j;
        lastImpar = array[j];
      }
    }
  }
  console.log(`[${desordenado}] = [${array}]`);
}

ordenarImpares([5, 3, 2, 8, 1, 4]);
ordenarImpares([2, 9, 2, 8, 5, 4, 1, 0, 3, 6, 5]);
ordenarImpares([13, 33, 21, 81, 12, 45, 11]);
ordenarImpares([13, 1, 7, 5, 15, 17, 161]);
ordenarImpares([1, 2, -1, -8, -3]);
