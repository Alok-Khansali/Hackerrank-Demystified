from collections import OrderedDict
def merge_the_tools(string, k):
    l=(len(string))
    for x in range(0,(l-k+1),k):
        print("".join(OrderedDict.fromkeys(string[x:x+k])))
if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)

