def solution(N):
    b = bin(N) 
    cadena = str(b)[2:]
    #pass
    gaps = []
    count = 0
    for i in range(len(cadena)):

        if(cadena[i] == '1') :
            gaps.append(count)
            count = 0
        if(cadena[i] == '0'):
            count = count + 1

    res = max(gaps)
    return res


#test case
x = 529
fin = solution(x)
print(fin)
