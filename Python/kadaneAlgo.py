from sys import maxsize

def maxSubArrSum(arr, size):
    start = 0 #Starting index
    end = 0 #Ending index
    s = 0
    max_so_far = -maxsize -1
    max_ending_here = 0
    for i in range(size):
        max_ending_here += arr[i]
        if (max_so_far < max_ending_here):
            max_so_far=max_ending_here 
            start = s
            end = i
        if (max_ending_here<0):
            max_ending_here = 0
            s = i+1
    print("Starting Index %d" % (start))
    print("Ending Index %d" % (end))
    return max_so_far

arr = [-2,-3,4,-1,-2,1,5,-3]
print("Given Array:",arr)
size = len(arr)

max_sum = maxSubArrSum(arr, len(arr))

print("Maximum Contiguous Sum:", max_sum)