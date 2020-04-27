def gap(N):
    cont_base = 0
    gap_max =  0
    b = bin(N)
    a = b[2:]
    for i in range(len(a)):
        if a[i] == '1':
            
            if cont_base>gap_max:
                gap_max = cont_base
            cont_base=0
        else:
            cont_base+=1
        
        
      
    return gap_max
