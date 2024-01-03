s=input().strip().split(" ")
n,m=int(s[0]),int(s[1])
c=0
s1=list(map(int,input().strip().split(" ")))
a=set(map(int,input().strip().split(" ")))                  #sets are faster for search operations
b=set(map(int,input().strip().split(" ")))
for x in s1:
        if x in a:
            c+=1
        if x in b:
            c-=1
print(c)
