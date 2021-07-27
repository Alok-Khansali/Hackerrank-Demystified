l,s=[],""
for x in range(int(input())):
    s=list(map(str,input().split()))
    if s[0]=="insert":
        l.insert(int(s[1]),int(s[2]))
    elif s[0]=="print":
        print(l)
    elif s[0]=="remove":
        l.remove(int(s[1]))
    elif s[0]=="append":
        l.append(int(s[1]))
    elif s[0]=="sort":
        l.sort()
    elif s[0]=="pop":
        a=l.pop()
    elif s[0]=="reverse":
        l.reverse()
