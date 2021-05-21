#include <bits/stdc++.h>
using namespace std;
double solve(long long mx,long long nx,long long my,long long ny) 
{
    double md=max(mx-nx,my-ny);
    md = max(max(max(max(md,sqrt(mx*mx+my*my)),sqrt(nx*nx+ny*ny)),sqrt(nx*nx+my*my)),sqrt(mx*mx+ny*ny));
    return(md);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        int t,mx=0,my=0,nx=1e9,ny=1e9,x=0,y=0;
        cin>>t;
        while(t--)
        {
            cin>>x>>y;
            mx=max(mx,x),nx=min(nx,x),my=max(my,y),ny=min(ny,y);
        }
    double result = solve(mx,nx,my,ny);
    printf("%.6lf\n",result);
    return 0;
}
