#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    vector<pair<int,int>> o;
    for(int i=0;i<n;i++)
      {
          int x,y;
          cin>>x>>y;
          o.push_back({x+y,i+1});
      }
    sort(o.begin(),o.end());
    for(int i=0;i<n;i++)
      cout<<o[i].second<<" ";
    return 0;
}
