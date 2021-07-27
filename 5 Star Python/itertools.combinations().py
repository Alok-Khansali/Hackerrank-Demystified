from itertools import combinations
s,n=map(str,raw_input().split())
for x in range(1,int(n)+1):
    l=list(combinations(sorted(s),x))
    for y in l:
     print("".join(y))
