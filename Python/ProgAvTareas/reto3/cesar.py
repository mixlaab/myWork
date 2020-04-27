def impar(a):
    #len(a)
    n = 0
    b = 0

    for n in range(len(a)):
        if a[n] != a[n:]:
            b = a[n]

    print(b)
