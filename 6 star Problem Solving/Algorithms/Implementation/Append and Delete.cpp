#include <bits/stdc++.h>
using namespace std;
string appendAndDelete(string s, string t, int k) 
{
    int i=0;
    for(i=0;i<min(s.size(),t.size());i++)
          if(s[i]!=t[i])
                 break;
    int mx=(s.size()+t.size()-2*i);
    while(mx<k) 
        mx=((i-->0)?(mx+2):(mx+1));
    return(mx==k?"Yes":"No");
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s,w;
    int k;
    cin>>s>>w>>k;
    cout <<appendAndDelete(s,w,k)<<"\n";
    return 0;
}
