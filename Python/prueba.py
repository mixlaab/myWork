def solution(A):   
    B = sorted(A)
    C = [B[0]]
    res = 1
    for i in range(1,len(B)):
        if B[i] != B[i-1]:
            C.append(B[i])
    for i in range(len(C)):
        if C[i] == res:
            res = res+1
    return res
    #pass

#test case
A = [-1, -3]
print(solution(A))
