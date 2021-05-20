#include <bits/stdc++.h>
using namespace std;
string fairRations(vector<int> v) {
    int o=0,s=0;
    vector<int> g;
        for(int i=0;i<v.size();i++)
           if(v[i]&1)
              o++,g.push_back(i);
    if(o&1)
      return("NO");
    for(int i=0;i<g.size();i+=2)
       s+=(g[i+1]-g[i]);
    return(to_string(s*2));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
        cin>>v[i];
    cout << fairRations(v) << "\n";
    return 0;
}
