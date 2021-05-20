#WORKS FOR PYPY3 AND PYTHON 3        FOR PYPY2 AND PYTHON 2 USE raw_input().strip()     instead of input().strip()    in line 19 of the code
import math
import os
import random
import re
import sys
def dayOfProgrammer(year):
    leap = False
    if(year%400==0 or (year %4==0 and year%100!=0) or (year <1918 and year %100 ==0)):
       leap =True
    if(year==1918):
     return("26.09.1918")
    if(leap==True):
         return("12.09."+str(year))
    else:
         return("13.09."+str(year))         
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    year = int(input().strip())
    result = dayOfProgrammer(year)
    fptr.write(result + '\n')
    fptr.close()
