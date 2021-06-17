#include <bits/stdc++.h>
using namespace std;
int luckBalance(int k, vector<pair<int,int>> c) 
{
        long s=0,x=k;
         sort(c.begin(),c.end());
         for(int i=c.size()-1;i>=0;i--)
            if(c[i].second==0)
               s+=c[i].first;
            else if(x>0)
                s+=c[i].first,--x;
            else
               s-=c[i].first;
        return(s);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> c(n);
    for (int i = 0; i < n; i++) 
            cin>>c[i].first>>c[i].second;
    cout <<luckBalance(k, c)<< "\n";
    return 0;
}
