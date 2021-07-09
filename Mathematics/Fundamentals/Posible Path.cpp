#include <bits/stdc++.h>
using namespace std;
string solve(long a, long b, long x, long y) {
          if(__gcd(a,b)==__gcd(x,y))
            return("YES");
          return("NO");
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        long a,b,x,y;
        cin>>a>>b>>x>>y;
        cout<<solve(a,b,x,y)<<"\n";
    }
    return 0;
}
