def count_substring(string, sub_string):
    c=0
    for y in range(0,len(string)-len(sub_string)+1,1):
        if(string[y:y+len(sub_string)]==sub_string):
            c+=1
    return(c)
if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
