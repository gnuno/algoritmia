/*  Author: Didier Stevenson Calvache Grajales
    Date: April 2021
    <didiermaxilo3@gmail.com>

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
*/

#include <iostream>
using namespace std;

bool itsPair(int number){
    if(number%2 == 0){
        return true;
    }
    return false;
}
void printArray(int array[], int size){
    size -= 1;
    int i;

    cout << "{"<<array[0]<<",";
    for(i = 1; i < size; i++){
        cout << " " << array[i] << ",";
    }
    cout << " " << array[i] << "}";
}
void orderArray(int array[], int size){
    int smaller, pos;

    for(int i = 0; i < size; i++){
        smaller = array[i];
        pos = i;
        //Cicle for select the smaller number
        for(int j = i; j < size; j++){
            if(smaller>array[j]){
                smaller = array[j];
                pos = j;
            }
        }
        if(smaller!=array[i]){
            array[pos] =array[i];
            array[i] = smaller;
        }
        
    }
}
void orderOddNumbers(int array[], int size){
    //Auxiliary array for Odd Numbers
    int arrayOdd[size]={};
    int i;

    //Throws the odd numbers for the auxiliary vector
    for(i = 0; i < size; i++){
        if(!itsPair(array[i])){
            arrayOdd[i] = array[i];
            array[i] = -1;
        }
    }

    orderArray(arrayOdd, size);

    //Finally orders the odd numbers of the odd numbers array at the general numbers array
    for(i = 0; arrayOdd[i]==0; i++){}
    int actNumber = i;
    for(i = 0; i < size; i++){
        if(array[i] == -1){
            array[i]=arrayOdd[actNumber];
            actNumber += 1;
        }
    }
}

int main(){
    //Test Cases
    int numbers[] = {13, 33, 21, 81, 12, 45, 11};
    int numbers2[] = {2, 4, 45, 89, 21, 22, 99};
    int numbers3[] = {2, 3, 5, 6, 3, 5, 6, 11, 2, 4, 6};

    //Variables declaration
    int quaNumbers = sizeof(numbers)/sizeof(numbers[0]);
    int quaNumbers2 = sizeof(numbers2)/sizeof(numbers2[0]);
    int quaNumbers3 = sizeof(numbers3)/sizeof(numbers3[0]);

    cout << "\nThis is the vector 1 initially: ";
    printArray(numbers, quaNumbers);
    cout << "\nThis is the vector 2 initially: ";
    printArray(numbers2, quaNumbers2);
    cout << "\nThis is the vector 3 initially: ";
    printArray(numbers3, quaNumbers3);

    orderOddNumbers(numbers, quaNumbers);
    orderOddNumbers(numbers2, quaNumbers2);
    orderOddNumbers(numbers3, quaNumbers3);

    cout<<"\n\n\t\t===============================================================\n\n";
    
    cout << "\nThis is the vector 1 after sorting odd numbers in increasing order: ";
    printArray(numbers, quaNumbers);
    cout << "\nThis is the vector 2 after sorting odd numbers in increasing order: ";
    printArray(numbers2, quaNumbers2);
    cout << "\nThis is the vector 3 after sorting odd numbers in increasing order: ";
    printArray(numbers3, quaNumbers3);
}