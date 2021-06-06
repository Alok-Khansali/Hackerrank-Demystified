#include <bits/stdc++.h>
using namespace std;
#define m 1000000007
typedef long long int lli;
typedef long long ll;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,q,a,b,k,mx=0;
    cin>>n>>q;
    vector<ll> v(n+1,0);
    for(int i=0;i<q;i++)
    {
        cin>>a>>b>>k;
        v[a]+=k;
        if(b+1<=n) 
          v[b+1]-=k;
    }
    for(int i=1;i<=n;i++)
       v[0]+=v[i],mx=max(mx,v[0]);
    cout<<mx;
    return 0;
}
