def bubbleSort(x):
    n = len(x)

    for i in range(n):

        for j in range(0, n-i-1):

            if x[j] > x[j+1] :
                x[j], x[j+1] = x[j+1], x[j]

x = [9,3,9,3,3,7,9,14,15,7,9,15,14,9,7,3]
temp=0
n=len(x)
bubbleSort(x)
i=0
print("El numero sin pareja es")
for i in range(n-1):
    if x[i]!=x[i+1] and x[i]!= x[i-1]:
        temp=x[i]
        print(temp)
    else:
        temp=x[i+1]
