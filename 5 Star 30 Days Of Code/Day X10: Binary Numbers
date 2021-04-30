#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,an=0,s1=0;
    cin>>n;
    string s ="";
    while(n>0)
    {
     if(n&1)                      //if current bit is a set bit
       an++;
      else 
       an=0;
     if(s1<an)                    // max value
       s1=an;
      n/=2;
    }
      cout<<s1;
    return 0;
}
