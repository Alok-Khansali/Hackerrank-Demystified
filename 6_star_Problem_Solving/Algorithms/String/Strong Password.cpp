#include <bits/stdc++.h>
using namespace std;
int minimumNumber(int n, string s) 
{
    int a[4]={0,0,0,0},an=0;
    char c;
     for(int i=0;i<n;i++)
     {
          c=s[i];
          if(c>='0' && c<='9')
           a[0]++;
          else if(c>='a' && c<='z')
            a[1]++;
          else if(c>='A' && c<='Z')
            a[2]++;
          else
            a[3]++;
     }
     for(int i=0;i<4;i++)
       if(a[i]==0)
         an++;
    return(max(6-n,an));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<(minimumNumber(n, s));
    return 0;
}
