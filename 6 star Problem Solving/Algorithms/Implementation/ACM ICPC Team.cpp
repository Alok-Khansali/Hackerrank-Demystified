#include <bits/stdc++.h>
using namespace std;
vector<int> acmTeam(vector<string> t,int m) 
{
    vector<int> v(2,0);                             //v[0] = max topics known     v[1] = no. of teams that know the max. no. of topics
    int c=0,mx=0;                                   //c = topics known 
    for(int i=0;i<t.size()-1;i++)
      for(int j=i+1;j<t.size();j++,c=0)
        {
            for (int k = 0; k < m; k++)
               c+=(t[i][k]-'0'|t[j][k]-'0');
            if(mx==c)                               //mx = Maximum number of topics.
                   v[1]++;
            else if(c>mx)
                   v[1]=1,mx=c,v[0]=mx;
        }
    return(v);         
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<string> t(n);
    for (int i = 0; i < n; i++) 
      cin>>t[i];
    vector<int> result = acmTeam(t,m);
    for (int i = 0; i < result.size(); i++)
        cout << result[i]<<"\n";
    return 0;
}
