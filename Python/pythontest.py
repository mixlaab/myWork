def solution(N):

  for i in range(1,N+1):
    cadena = ""
    a = i % 2
    b = i % 3
    c = i % 5
    if (a != 0) and (b!= 0) and (c!= 0) :
      cadena = i
    if (a == 0):
      cadena = cadena + "Codility"
    if (b == 0):
      cadena = cadena + "Test"
    if (c == 0) :
      cadena = cadena + "Coders"

    print(cadena)
    # write your code in Python 3.6
  pass

solution(24)



