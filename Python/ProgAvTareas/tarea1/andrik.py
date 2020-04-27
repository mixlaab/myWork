def numero(N):
    gap1 = 0
    gap2 = 0
    while N > 0 and N%2 == 0:
        N //= 2
    while N > 0:
        x = N%2
        if x == 0:
            gap2 += 1
        else:
            if gap2 != 0:
                gap1 = max(gap2, gap1)
                gap2 = 0
        N //= 2
    return gap1

