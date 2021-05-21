#include <bits/stdc++.h>
using namespace std;
string encryption(string s) 
{
    s.erase(remove(s.begin(),s.end(),' '),s.end());
    string w="";
    int l=s.size(),y=round(ceil(sqrt(l)));
    for(int i=0;i<y;i++)
     {
         for(int j=i;j<l;j+=y)
           w+=s[j];
        w+=" ";
     }
     return(w);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    cout <<encryption(s)<< "\n";
    return 0;
}
