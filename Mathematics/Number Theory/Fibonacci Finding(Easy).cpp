#include <bits/stdc++.h>
using namespace std;
#define m 1000000007
typedef long long int lli;
void prod(lli f[2][2], lli v[2][2]);                   //helper function to calculate product of the two matrices
void power(lli f[2][2],int n)
{
    if(n==0||n==1)
     return;
    lli v[2][2]={{1,1},{1,0}};                  
    power(f,n/2);
    prod(f,f);
    if(n&1)
       prod(f,v);
}
void prod(lli f[2][2],lli v[2][2])
{
    int x =((f[0][0] * v[0][0])%m + (f[0][1] * v[1][0]) %m)%m,       y =((f[0][0] * v[0][1])%m + (f[0][1] * v[1][1]) %m)%m;
    int z =((f[1][0] * v[0][0])%m + (f[1][1] * v[1][0]) %m)%m,       w =((f[1][0] * v[0][1])%m + (f[1][1] * v[1][1]) %m)%m;
    f[0][0] = x,f[0][1] = y,f[1][0] = z,f[1][1] = w;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,a,b,n;
    cin>>t;
    while(t--) 
    {
        cin>>a>>b>>n;
        if(n==1)
          cout<<b<<"\n";
        else 
        {
            lli f[2][2]={{1,1},{1,0}};
            power(f,n-1);
            cout<<(b*f[0][0]+a*f[0][1])%m<<"\n";
        }
    }
    return 0;
}
