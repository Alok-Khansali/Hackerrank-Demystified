#include <bits/stdc++.h>
using namespace std;
int marsExploration(string s) {
    int c=0;
    for(int i=0;i<=s.size()-3;i+=3)
     {
           if(s[i]!='S')
              c++;
           if(s[i+1]!='O')
              c++;
           if(s[i+2]!='S')
              c++;
     }               
    return(c);
}
int main()
{
    cin.tie(NULL);
    string s;
    cin>>s;
    cout <<marsExploration(s)<< "\n";
    return 0;
}
