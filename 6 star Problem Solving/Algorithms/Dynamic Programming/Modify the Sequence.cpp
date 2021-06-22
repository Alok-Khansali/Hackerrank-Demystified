#include<bits/stdc++.h>
using namespace std;
#define m 1000000001
int main() 
{
    int n,ans=0;
    cin >> n;
    int v[n+1],dp[n+1];
    v[0]=1;
    for(int i=0;i<=n;i++)
      dp[i]=m;
    for(int i=1;i<=n;i++)
    {
     cin>>v[i];
     v[i]-=i;
    }
    dp[0]=0;
    for(int i=1;i<=n;i++) {
        if(v[i]<0)
            continue;
        int c = (upper_bound(dp,dp+n,v[i]) - dp - 1);
        dp[c+1] = v[i];
    }
    for(int i=0;i<=n;i++)
         if (dp[i]<m) 
            ans = max(ans,i);
    cout <<n-ans<<"\n";
}
