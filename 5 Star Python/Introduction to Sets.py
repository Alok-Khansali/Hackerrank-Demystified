from __future__ import division
def average(a):
    s=set(a)
    return(round(1000*sum(s)/len(s))/1000)
if __name__ == '__main__':
    n = int(raw_input())
    arr = map(int, raw_input().split())
    result = average(arr)
    print result
