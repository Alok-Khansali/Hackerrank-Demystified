#include <bits/stdc++.h>
using namespace std;
int getMinimumCost(int k, vector<int> c) 
{
    int s=0,x=0;
    sort(c.begin(),c.end());
    for(int i=c.size()-1;i>=0;i--,x++)
        s+=(x/k+1)*c[i];
    return(s);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int> c(n);
    for (int i = 0; i < n; i++) 
       cin>>c[i];
    int mn = getMinimumCost(k, c);
    cout<<mn;
    return 0;
}
