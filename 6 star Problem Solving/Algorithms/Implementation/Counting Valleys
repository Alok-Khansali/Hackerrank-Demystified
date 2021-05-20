#include <bits/stdc++.h>
using namespace std;
int countingValleys(int s, string p) 
{
    int c=0,l=0;
    for(int i=0;i<s;i++)
       if(p[i]=='U')
         l++;
        else 
          {
              l--;
              if(l+1==0)
                c++;
          } 
    return(c);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s;
    cin>>s;
    string p;
    cin>>p;
    cout <<countingValleys(s,p)<< "\n";
    return 0;
}
