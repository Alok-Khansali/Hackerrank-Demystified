#include <bits/stdc++.h>
using namespace std;
vector<int> solve(int n,int m) 
{
    int t,u,f=0,r=0;
    vector<int> v(2,0);
    for(int i=0;i<m;i++)
    {
        cin>>t>>u;
        if(t==1)
            f=(f+u)%n;
        else
            f=(n-f+u)%n,r++;
    }
    if(r&1)
          v[0]=2,v[1]=f;
    else
          v[0]=1,v[1]=n-f%n;
    return(v);
}        
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> result = solve(n,m);
      cout<<result[0]<<" "<<result[1];
    return 0;
}
