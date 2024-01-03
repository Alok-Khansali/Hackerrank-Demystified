a,b=(int(raw_input())),set(map(int, raw_input().split()))
a,d=(int(raw_input())),set(map(int, raw_input().split()))
e=list((b.union(d)).difference(b.intersection(d)))
e.sort()
for x in e:
    print(x)
