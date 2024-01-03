#include <bits/stdc++.h>
using namespace std;
vector<int> climbingLeaderboard(vector<int> &r, vector<int> &p){
    vector<int> c;
    sort(r.begin(),r.end());
     for(int i=0;i<p.size();i++)
     {
            int d=lower_bound(r.begin(),r.end(),p[i])-r.begin();        //In built Bound functions are pretty fast for sorted vectors
            if(p[i]==r[d])
             c.push_back(r.size()-d);
            else
              c.push_back(r.size()-d+1);
     }
     return(c);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,r=0;
    cin>>n;
    vector<int> ranked;
    cin>>m;
    ranked.push_back(m);
    for (int i = 1; i < n; i++)                                        //Unique Elements Only
    {
        cin>>m;
        if(ranked[r]!=m)
          ++r,ranked.push_back(m);
    }
    cin>>m;
    vector<int> player(m);
    for (int i = 0; i <m; i++) 
        cin>>player[i];
    vector<int> result = climbingLeaderboard(ranked, player);
    for (int i = 0; i < result.size(); i++) 
        cout << result[i]<<"\n";
    return 0;
}
