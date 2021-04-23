/*
Monedas de Cambio
    Descripción
El objetivo de este desafio es encontrar el mínimo número de monedas que se necesitan para cambiar el valor de input (INTEGER) en monedas de denominación 1, 5, y 10.

El INPUT consiste en un entero simple M, y la salida es otro numero entero que llamaremos K que será la cantidad necesarias de monedas de las denominaciones mencionadas anteriormente para completar M.

    Ejemplo 1
Input:
2
Output:
2
Explicación: 2 = 1 + 1
    Ejemplo 2
Input:
28
Output:
6
Explicacion: 10 + 10 + 5 + 1 + 1 + 1

1 < M < 130
*/

struct Solution;

impl Solution {
    pub fn adder(nums: i32) -> i32{
        let res:i32;
        if nums >=10 {
            res = Solution::adder(nums-10);
            return res+1;
        }
        if nums>=5 {
            res = Solution::adder(nums-5);
            return res+1;
        }
        if nums>=1 {
            res = Solution::adder(nums-1);
            return res+1;
        }
        return 0;
    }
    
    pub fn change_coins(nums: i32) -> i32 {
        let res = Solution::adder(nums);
        return res;
    }
}


fn main(){
    let mut param = 28;
    println!("{}, resultado correcto es 6", Solution::change_coins(param));
    param = 2;
    println!("{}, resultado correcto es 2", Solution::change_coins(param));
    param = 10;
    println!("{}, resultado correcto es 1", Solution::change_coins(param));
    param = 30;
    println!("{}, resultado correcto es 3", Solution::change_coins(param));
    param = 15;
    println!("{}, resultado correcto es 2", Solution::change_coins(param));
    param = 7;
    println!("{}, resultado correcto es 3", Solution::change_coins(param));
    param = 31;
    println!("{}, resultado correcto es 4", Solution::change_coins(param));
}