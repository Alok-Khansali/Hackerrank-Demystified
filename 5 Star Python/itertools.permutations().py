from itertools import permutations as prm
s,t=map(str,raw_input().split())
l=list(prm(s,int(t)))
l.sort()
for x in l:
    print("".join(x))
