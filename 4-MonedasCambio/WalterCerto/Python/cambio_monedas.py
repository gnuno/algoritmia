# Monedas de Cambio:
#     - El objetivo de este desafio es encontrar el 
#     mínimo número de monedas que se necesitan para cambiar el 
#       valor de input (INTEGER) en monedas de denominación 1, 5, y 10.
#     - El INPUT consiste en un entero simple M, 
#     y la salida es otro numero entero que llamaremos K 
#     que será la cantidad necesarias de monedas de las denominaciones
#       mencionadas anteriormente para completar M.
#  - Ejemplo 1
# Input: 2
# Output: 2
# Explicación: 2 = 1 + 1
#  - Ejemplo 2
# Input: 28
# Output: 6
# Explicacion: 10 + 10 + 5 + 1 + 1 + 1
# 1 < M < 130
import random

exp=[]
m = random.randint(1,130)
k=0

print("Input: " + str(m))
while (m>=1):
    if(m>=10):
        m= m-10
        exp.append(10)
    elif m>=5:
        m=m-5
        exp.append(5)
    else:
        m=m-1
        exp.append(1)
    k=k+1

print("Output: " + str(k))
print("Explicacion: ")
print(exp)