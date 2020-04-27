def decabin(num):
    binario= bin(num)
    binar = (binario.replace('ob',''))
    return binar

def nrobin(z):
    numb = decabin(z)
    nb = 0
    gpm = 0
    for i in range (len(numb)):
        if numb[i] == '1':
            if nb > gpm:
                gpm = nb
            nb = 0
        else:
            nb = nb + 1

    return gpm
