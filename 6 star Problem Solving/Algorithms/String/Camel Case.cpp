#include <bits/stdc++.h>
using namespace std;
int camelcase(string s) {
    int c=1;
    for(int i=0;i<s.size();i++)
        if(s[i]-'a'<0)
          c++;
    return(c);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int result = camelcase(s);
    cout<<result<<"\n";
    return 0;
}


