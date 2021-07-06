#include <bits/stdc++.h>
using namespace std;
string gridSearch(vector<string> v, vector<string> w) 
{
    for(int i=0;i<=v.size()-w.size();i++)
        for(int j=0,a=0;j<=(v[0].size()-w[0].size());j++,a=0)
            if(v[i].substr(j,w[0].size())==w[0])
            {
                a++;
                for(int k=1,t=i+1;k<w.size();k++,t++)
                    a+=(v[t].substr(j,w[0].size())==w[k]);
                if(a==w.size())
                    return("YES");
            }
    return("NO");
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,R,C,r,c;
    cin>>t;
    while(t--) {
        cin>>R>>C;
        vector<string> G(R);
        for (int i = 0; i < R; i++) 
            cin>>G[i];
        cin>>r>>c;
        vector<string> P(r);
        for (int i = 0; i < r; i++) 
           cin>>P[i];
        cout << gridSearch(G,P) << "\n";
    }
    return 0;
}
