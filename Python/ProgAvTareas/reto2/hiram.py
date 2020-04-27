def array(N, K=1):
   if len(N) == 0:
      return N
   K = -K + len(N)
   return N[K:] + N[:K]
