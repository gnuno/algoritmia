/*Dado un array de enteros, retornar el tercer entero más grande del mismo. Si el tercero más grande no existe, retornar el número mayor.

Ejemplo 1:

Input: nums = [3,2,1]
Output: 1

Ejemplo 2:

Input: nums = [1,2]
Output: 2

Ejemplo 3:

Input: nums = [2,2,3,1]
Output: 1

Condiciones:

* 1 <= nums.length <= 104
* -231 <= nums[i] <= 231 - 1


Desafío: Podés encontrar una solución O(n)? */
public class res {

    public static int solution(int[] nums){
        int nL = nums.length;
        int m1 = nums[0],m2 = nums[0],m3 = nums[0], band = 2;
        if(nL == 1){
            return nums[0];
        }if (nL == 2){
            if(nums[0] >= nums[1]){
                return nums[0];
            }else{
                return nums[1];
            }
        }
        
        else{
            for (int i = 1; i < nL; i++) {
                if(nums[i] == m1 || nums[i] == m2 || nums[i] == m3){
                    continue;
                }
                if(band>0){
                    if(nums[i]>=m1){
                        m3 = m2;
                        m2 = m1;
                        m1 = nums[i];
                    }
                    else if(band == 2){
                        m2 = nums[i];
                    }else{
                        if(nums[i]>=m2){
                            m3 = m2;
                            m2 = nums[i];
                        }
                        else{
                            m3 = nums[i];
                        }
                    }
                    band--;
                }
                else{
                    if(nums[i]>m1){
                    m3 = m2;
                    m2 = m1;
                    m1 = nums[i];
                }
                else if(nums[i]>m2){
                    m3 = m2;
                    m2 = nums[i];
                }
                else if(nums[i]>m3){
                    m3 = nums[i];
                }
            }
        }
        }
        if(band > 0){
            return m1;
        }
        return m3;
        }

    public static void main(String[] args){
        int param[] = {3,2,1};//1
        System.out.println(solution(param));
        int param2[] = {1,2};//2
        System.out.println(solution(param2));
        int param3[] = {2,2,3,1};//1
        System.out.println(solution(param3));
        int param4[] = {1,1,2};//2
        System.out.println(solution(param4));
        int param5[] = {3,3,4,3,4,3,0,3,3};//0
        System.out.println(solution(param5));
    }
}