from collections import Counter
s,total=int(raw_input()),0
shoes=Counter(map(int,raw_input().split()))
for x in range(int(raw_input())):
    size,price=map(int,raw_input().split())
    if(shoes[size]):
        total += price
        shoes[size] -= 1
print(total)
