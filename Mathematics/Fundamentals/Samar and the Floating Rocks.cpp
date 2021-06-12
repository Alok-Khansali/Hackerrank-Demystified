#include <bits/stdc++.h>
using namespace std;
int solve(int x1, int y1, int x2, int y2) 
{
    long long dx=abs(x2-x1),dy=abs(y2-y1);
    if(dx == 0 || dy == 0)
        return(dy+dx-1);
    long long g=__gcd(dx,dy);
    return(g-1);  
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t,x,y,X,Y;
    cin>>t;
    while(t--)
    {
        cin>>x>>y>>X>>Y;
        cout<<solve(x,y,X,Y)<<"\n";
    }
    return 0;
}
