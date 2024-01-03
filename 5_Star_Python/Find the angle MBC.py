import math
ab,bc=int(input()),int(input())
print(str(round(((math.atan(ab/bc)*180)/math.pi)))+chr(176))
for j in range(1,int(input())+1):
      print(*range(1,j+1), sep="",*range(j-1,0,-1))                #supercode
