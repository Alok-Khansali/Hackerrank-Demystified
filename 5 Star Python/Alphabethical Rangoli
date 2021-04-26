def print_rangoli(size):      #naive solution
  if(size==1):
         print("a")  
  else: 
    for x in range(size):
        for k in range((2*size)-2-2*x,0,-2):
            print("-",end="-")
        for y in range(x+1):
            print(chr(96+size-y),end="-")
        for y in range(x,0,-1):
            if (x==size-1 and y==1):
               print(chr(97+size-y),end="")
            else:
             print(chr(97+size-y),end="-")
        for k in range(2*size -3-2*x,0,-1):
            print("-",end="")
        print()
    for x in range(size-1):
        for k in range(0,2*x+2,2):
            print("-",end="-")
        for y in range(size-x-1):
            print(chr(96+size-y),end="-")
        for y in range(size-x-2,0,-1):
            print(chr(97+size-y),end="-")
        for k in range(0,2*x+1,1):
            print("-",end="")
        print()
