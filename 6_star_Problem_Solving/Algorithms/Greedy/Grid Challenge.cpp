#include <bits/stdc++.h>
using namespace std;
string gridChallenge(vector<string> &g) 
{
    int a[g.size()][g.size()];
    for(int i=0;i<g.size();i++)
        sort(g[i].begin(),g[i].end());
     for(int i=0;i<g.size();i++)
       for(int j=1;j<g.size();j++)
          if(g[j][i]<g[j-1][i])
            return("NO");
    return("YES");
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n;
    cin>> t;
    while(t--) 
    {
        cin>>n;
        vector<string> grid(n);
        for (int i = 0; i < n; i++)
            cin>> grid[i];
        cout <<  gridChallenge(grid) << "\n";
    }    
    return 0;
}
