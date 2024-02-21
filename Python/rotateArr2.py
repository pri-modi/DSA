#Rotating using 2 pointers or swapping elements
def RightRotateArr(arr, size):
    i=0 
    j=size-1
    while(i != j):
        arr[i], arr[j] = arr[j], arr[i]
        i += 1

def LeftRotateArr(arr, size):
    i=0 
    j=size-1
    while(i != j):
        arr[i], arr[j] = arr[j], arr[i]
        j -= 1

def printArr(arr, size):
    for i in range(size):
        print(arr[i], end=" ")
    print("\n")

arr = [1,2,3,4,5]
size = len(arr)
print("Original Array: ")
printArr(arr, size)

RightRotateArr(arr, size)

print("Right Rotated Array: ")
printArr(arr, size)

LeftRotateArr(arr, size)

print("Left Rotated Array: ")
printArr(arr, size)
