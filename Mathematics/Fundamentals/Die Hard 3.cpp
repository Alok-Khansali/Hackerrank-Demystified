#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a,b,c;
    cin>>t;
    while(t--) 
    {
        cin>>a>>b>>c;
        int g=__gcd(a,b);                                         //Using Bezout's Identity
        cout <<(( c%g == 0 && c <= max(a,b))? "YES\n" : "NO\n");
    }
    return 0;
}
