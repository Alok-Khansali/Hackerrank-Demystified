#include <bits/stdc++.h>
using namespace std;
vector<string> cavityMap(vector<string> g) {
    vector<string> v={g[0]};
    for(int i=1;i<g.size()-1;i++)
      {
          string x=g[i];
          for(int j=1;j<x.size()-1;j++)
             if((x[j]>g[i-1][j]) && (x[j]>x[j+1]) &&(x[j]>x[j-1]) && (x[j]>g[i+1][j]))
              x=x.substr(0,j)+'X'+x.substr(j+1);
        v.push_back(x); 
      }
      v.push_back(g[g.size()-1]);
      return(v);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> g(n);
    for (int i = 0; i < n; i++)
       cin>>g[i];
    vector<string> r = cavityMap(g);
    for (int i = 0; i < g.size(); i++) 
        cout << r[i]<<"\n";
    return 0;
}
