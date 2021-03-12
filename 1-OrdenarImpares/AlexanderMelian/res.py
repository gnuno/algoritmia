'''
Tenes array de numeros.
Ordena los impares de forma ascendente y deja los pares en su lugar.
El cero es par asi que no lo muevas.
Si tenes un array vacio, devolve el array.
Example

sortArray([5, 3, 2, 8, 1, 4]) == [1, 3, 2, 8, 5, 4]
sortArray([7, 5, 2, 6, 1, 3]) == [1, 3, 2, 6, 5, 7]
sortArray([13, 33, 21, 81, 12, 45, 11]) == [11, 13, 21, 33, 12, 45,81]
sortArray([12, 22, 4, 6, 12, 46, 16]) == [12, 22, 4, 6, 12, 46, 16]
sortArray([13, 1, 7, 5, 15, 17, 161]) == [1, 5, 7, 13, 15, 17, 161]


'''

def sortArray(arr):
    lengArr = len(arr)
    for i in range(0,lengArr):
        if arr[i]%2!=0:
            minodd = arr[i]
            enc = False
            for j in range(i+1,lengArr):
                if arr[j]%2!=0:
                    if minodd > arr[j]:
                        minodd = arr[j]
                        enc = True
                        imindodd = j
            if enc:
                arr[i],arr[imindodd] = arr[imindodd], arr[i]
    return arr


if __name__ == "__main__":
    param = [5, 3, 2, 8, 1, 4]
    res = sortArray(param)
    print(res)