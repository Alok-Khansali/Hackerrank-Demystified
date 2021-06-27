import os             #incase of BigIntegers I like to use java or python
import sys
def summingSeries(n):
    return((n*n)%1000000007)
t=int(input())
for x in range(t):
        n = int(input())
        print( summingSeries(n))
        


