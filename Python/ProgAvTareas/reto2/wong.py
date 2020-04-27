def rotar (A,K):
 b = []
 n = 0
 C = len(A)
 Z = K%C

 for N in range(Z+1):
    
    b = A[-N:] + A[:-N]
    N = N + 1
    
   
 print(b)  
