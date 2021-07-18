#include <bits/stdc++.h>
using namespace std;
#define m 1000000000
typedef long long int lli;
vector<lli> solve(int n) 
{
        vector<lli> v(1,1);
        for(int j=1;j<=n;j++)
        {
            lli t=v[0],s=0;
            for(int i=1;i<j;i++)
                s=v[i]+t,t=v[i],v[i]=s % m;
            v.push_back(1);
        }
        return(v);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<lli>result = solve(n);
        for (size_t i = 0; i < result.size(); i++) 
            cout << result[i]<<" ";
            cout<<'\n';
    }
    return 0;
}
