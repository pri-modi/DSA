#Reversing using a new array
def reverseArr(arr):
    revArr = arr[::-1]
    print("Reverse Array:", end=" ")
    for i in revArr:
        print(i, end =" ")

orgArr = [1,2,3,4,5]
reverseArr(orgArr)