def arrayMap(arr):
    flag = 0
    index = 0
    previus = 0
    maped = list()

    for i in range(0, len(arr)):
        if flag == 0:
            previus = arr[i]
            if previus == 0:
                maped.append(-1)
            else:
                maped.append(1)
            flag = 1
        elif previus == arr[i]:
            if previus == 0:
                maped[index] -= 1
            else:
                maped[index] += 1
        else:
            previus = arr[i]
            index += 1
            if previus == 0:
                maped.append(-1)
            else:
                maped.append(1)
    
    return maped

def findMaxString(arr, k):
    max = 0

    for i in range(0, len(arr)):
        rest = k

        if arr[i] < 0:
            if rest > -arr[i]:
                acc = rest - (rest + arr[i])
                rest = rest + arr[i]
            else:
                acc = rest
                rest = 0
        else:    
            acc = arr[i]


        for j in range(i+1, len(arr)):
            if arr[j] > 0:
                acc += arr[j]
            elif (arr[j] < 0) and (-arr[j] <= rest):
                acc += rest - (rest + arr[j])
                rest = rest + arr[j]
            else:
                acc += rest
                rest = rest + arr[j]

            if rest == 0:
                continue
            if rest < 0:
                break

        if (rest > 0) and (i != 0) and (arr[i-1] < 0):
            if rest < -arr[i-1]:
                acc += rest
            else:
                acc += rest - (rest + arr[i-1])
            rest = 0

        if (max < acc):
            print("{} - Nuevo max: {}; Anterior max: {}; Resto: {}".format(i,acc,max,rest))
            max = acc

    return max

def main(arr, k):
    maped = arrayMap(arr)
    print("Array: {}\tK: {}".format(maped,k))
    print("Maximo: ", findMaxString(maped, k))


arr = [0, 0, 1, 1, 1, 0] # 5 k=2
arr1 = [1,1,1,0,0,0,1,1,1,1,0] # 6 k=2
arr2 = [1,1,1,0,0,0,1,1,1,1,0] # 6 k=2
arr3 = [0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1] # 10 k=3
arr4 = [0,0,0,1] # 4 k=4

main([0, 0, 1, 1, 1, 0], 2) # 5
main([1,1,1,0,0,0,1,1,1,1,0], 2) # 6
main([1,1,1,0,0,0,1,1,1,1,0], 2) # 6
main([0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], 3) # 10
main([0,0,0,1], 4) # 4
main([0,0,1,1,0,0,1,1,0,0,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1], 10)
