#include <bits/stdc++.h>
using namespace std;
string seperatenumbers(string s,int ll)
{ 
    if(ll==1)
       return("NO");
    for(int i=1;i<=ll/2;i++)
    {
        long long f=stol(s.substr(0,i));
        string w=to_string(f),t=w;
        
        while(w.size()<ll)
            f++,w+=to_string(f);
        if(w==s)
           return("YES "+t);
    }
    return("NO");
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        cout<<seperatenumbers(s,s.size())<<"\n";
    }
    return 0;
}
