#include <bits/stdc++.h>
using namespace std;
int mmi(int a, int b, int *x, int *y);
int power(long long x,long long y,int m)
{
    int a=1;
    x%=m;
    if(x==0)
      return(0);
    while(y)
    {
        if(y&1)
          a=(a*x)%m;
        y/=2,x=(x*x)%m;
    }
    return(a);
}
int mmi(int a,int b,int *x,int *y)
{
    if (a==0)
    {
        *x=0,*y=1;
        return b;
    }
    int x1,y1,g=mmi(b%a,a,&x1,&y1);
      *x=y1-(b/a)*x1;
    return(g);
}
int solve(int a, int b, int m) 
{
    if(b>=0)
       return(power(a,b,m));
    int x,y;
    int g=mmi(a,m,&x,&y);
    a=(x % m + m)%m;
    return(power(a,b,m));
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,a,b,x;
    cin>>t;
    while(t--) {
        cin>>a>>b>>x;
        cout << solve(a, b, x)<< "\n";
    }
    return 0;
}
