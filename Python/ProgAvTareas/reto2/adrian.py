A=[1,2,3,4,5,6]
K = input("Num rotaciones")
B = []
N = 0
C = len(A)
Z = K%C

for N in range(Z+1):
    B = A[-N:] + A[:-N]
    N = N + 1
    print(B, N-1,Z)
