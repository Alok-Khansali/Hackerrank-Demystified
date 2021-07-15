x,y,z,n=int(input()),int(input()),int(input()),int(input())
l=[]
for i in range(x+1):
    for j in range(y+1):
        for k in range(z+1):
            if ((i+j+k)!=n):
                a=[i,j,k]
                l.append(a)
print(l)
