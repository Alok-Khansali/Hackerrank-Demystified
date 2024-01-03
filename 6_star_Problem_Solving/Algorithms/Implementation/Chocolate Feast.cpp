#include <bits/stdc++.h>
using namespace std;
int chocolateFeast(int w,int m) 
{
    int s=w,tt=0;
    while(s>=m)
       tt+=s/m,s=s/m+s%m;
    return (tt);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n=0,c=0,m=0;
        cin>>n>>c>>m;
        cout<<n/c+chocolateFeast(n/c,m)<< "\n";
    }
    return 0;
}

