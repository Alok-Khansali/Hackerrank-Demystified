n = input()
s = set(map(int, input().split()))
q=int(input())
for x in range(q):
   t=input().split()
   try:
    if(t[0]=="pop"):
        s.pop()
    elif(t[0]=="remove"):
        s.remove(int(t[1]))
    else:
        s.discard(int(t[1]))
   except:
          continue
print(sum(s))
