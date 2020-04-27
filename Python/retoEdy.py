#Learn more or give us feedback
def solucion(X,A):
  size=len(A)
  rio = [0]*size
  rio[0]=1
  for i in range(len(A)):
    j = 1
    total=0
    if A[i] <= X:
      rio[A[i]] = 1
    for j in range(X+1):
      if rio[j] == 0:
        total = total + 1
    if total == 0:
      print(i,"segundos")
      return
  if total > 0:
    print(-1)
  return
