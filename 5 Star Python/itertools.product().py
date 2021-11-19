from itertools import product
a,b = list(map(int,input().split())),list(map(int,input().split()))
print(*product(a,b))                 # * is the unpacker symbol for lists, ** is unpacker symbol for dictionary
