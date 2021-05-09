#include <bits/stdc++.h>
using namespace std;
bool c(const string &x,const string &y)
{
    if(x.size()!=y.size())
      return(x.size()<y.size());
      return(x<y);
}
vector<string> bigSorting(vector<string> u) 
{
    sort(u.begin(),u.end(),c);
    return(u);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<string> u(n);
    for (int i = 0; i < n; i++) 
         cin>>u[i];
    vector<string> result = bigSorting(u);
    for (int i = 0; i < result.size(); i++) 
        cout<<result[i]<<"\n";
    return 0;
}
