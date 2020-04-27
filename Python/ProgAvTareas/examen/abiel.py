def solucion(A):
    n=len(A)
    for i in range(n):
        for j in range(0,n-i-1):
            if A[j] > A[j+1]:
                A[j], A[j+1] = A[j+1], A[j]
    count=0
    for p in range(len(A)):
        if A[p] == p+1:
            count=count+1
        if A[p] != p+1:
            a=0
    if count==len(A):
        print(1)
    else:
        print(0)

