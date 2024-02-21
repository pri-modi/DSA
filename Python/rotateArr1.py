#//Rotating using the same array or by using the 'temp' variable
def RightRotateArr(arr, size):
    temp = arr[size-1]
    for i in range(size-1, 0, -1):
        arr[i] = arr[i-1]
    arr[0] = temp

def LeftRotateArr(arr, size):
    temp = arr[0]
    for i in range(0, size-1):
        arr[i] = arr[i+1]
    arr[size-1] = temp

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