#!/bin/python
import math
import os
import random
import re
import sys
def gradingStudents(g):
    for x in range(len(g)):
        if g[x]>=38:
            y=g[x]%10
            if(y>2 and y<5) :
                g[x]+=(5-y)
            elif(y>7 and y<10):
                g[x]+=(10-y)     
    return(g)
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')
    grades_count = int(raw_input().strip())
    g = []
    for _ in xrange(grades_count):
        grades_item = int(raw_input().strip())
        g.append(grades_item)
    result = gradingStudents(g)
    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')
    fptr.close()
