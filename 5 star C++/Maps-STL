#include <bits/stdc++.h>
using namespace std;
int main()
 {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    map<string, int> m;
    int n;
    cin>>n;
    while(n--)
    {
        int x=0,y=0;
        string s;
        cin>>x;
        cin>>s;
        if(x==1)
          {
              cin>>y;
              m[s]+=y;
          }
        else if(x==2)
             m.erase(s);
        else
          cout<<((m.find(s)!=m.end()) ?  m[s] : 0)<<"\n";
    }
    return 0;
}
