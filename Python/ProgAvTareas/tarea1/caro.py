def Dec_to_bin(numero):
    binario = bin(numero)
    N = (binario.replace('0b',''))
    return N

def gap(a):    
    b = Dec_to_bin(a) 
    gap1 = 0
    gap2 = 0
    for i in range(len(b)):
        if b[i] == '1':
            if gap1 > gap2:
                gap2 = gap1
            gap1 = 0
        else:
            gap1 = gap1+1
    return gap2
