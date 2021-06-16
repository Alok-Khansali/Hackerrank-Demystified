#include <bits/stdc++.h>
using namespace std;
#define m 1000000007
typedef unsigned long long int lli;
typedef long long ll;    
int solve(lli s) 
{
        lli x=s/21;
        while((s+x)/21!=x)
            x=(s+x)/21;
        return (2*(s+x))%m;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        lli t,s;
        cin>>t;
        while(t--)
        {
           cin>>s;
           cout << solve(s)<< "\n";
        }
    return 0;
}
