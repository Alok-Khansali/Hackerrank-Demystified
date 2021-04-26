#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q,l=0;
    cin>>n>>q;
    vector<vector<int>> r(n);
    for(int i=0;i<q;i++)
      {
          int x,y,z;
          cin>>x>>y>>z;
          if(x==1)
              r[(y^l)%n].push_back(z);
          else
          {
              int j=(y^l)%n,k=z%(r[j].size());
              l=r[j][k];
              cout<<l<<"\n";
          }
      }
    return 0;
}

