f,s,n=map(int,raw_input().split())          #For very large numbers I either use Java or Python
a=0
for x in range(n-2):
    a=f+s*s
    f,s=s,a
print(a)
