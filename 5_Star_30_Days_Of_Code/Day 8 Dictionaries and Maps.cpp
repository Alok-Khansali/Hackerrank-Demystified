#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int t;
        cin>>t;
        map<string, string>m;
        string k,v;
        while(t--)
       {
          cin>>k>>v;
          m.insert({k,v});  
       }
        while(cin>>k)
        {
            auto x=m.find(k);
            if(x==m.end())
            cout<<"Not found\n";
            else
            cout<<x->first<<"="<<x->second<<"\n";
        }
    return 0;
}
