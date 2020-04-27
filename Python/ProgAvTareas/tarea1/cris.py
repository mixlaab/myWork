def Transb(numero):
    binario = bin(numero)
    N = (binario.replace('0b',''))
    return N

def gap(a):
    
    b = Transb(a) 
    gapm = 0
    gapn = 0

    for i in range(len(b)):
        if b[i] == '1':
            if gapm > gapn:
                gapn = gapm
            gapm = 0
        else:
            gapm = gapm+1

    return gapn


#Asi las escriben gap(numero que quieres saber)
#llamar gap(numero que quieres saber )
