#include <bits/stdc++.h>
using namespace std;
vector<double> movingTiles(int l, int s1, int s2, vector<int> q) 
{
     vector<double>v;
     for(int i=0;i<q.size();i++)
     {
        double s=sqrt(q[i]),t=sqrt(2),d=abs(s2-s1),a=((l-s)*t)/d;
        v.push_back(a);
     }
     return(v);     
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int l,s1,s2,n;
    cin>>l>>s1>>s2>>n;
    vector<int> queries(n);
    for (int i = 0; i < n; i++)
        cin>>queries[i];
    vector<double> result = movingTiles(l, s1, s2, queries);
    for (int i = 0; i < result.size(); i++) 
       printf("%.4lf\n",result[i]);
    return 0;
}
