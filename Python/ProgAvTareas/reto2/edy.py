def solucion(x, y, n):
    for i in range(y):
        rotar(x, n)


def rotar(x, n):
    p = x[0]
    for i in range(n - 1):
        x[i] = x[i + 1]
    x[n - 1] = p

def imprimir_array(x, size):
    for i in range(size):
        print("%d" % x[i], end=" ")


x = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
size = len(x)
solucion(x, 2, size)
imprimir_array(x, size)
