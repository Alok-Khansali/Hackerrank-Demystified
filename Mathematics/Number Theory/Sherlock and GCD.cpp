#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n,g,x;
    cin>>t;
    while(t--) 
    {
        cin>>n>>g;
        for (int i = 1; i < n; i++) 
           {
                cin>>x;
                g=__gcd(g,x);
           }
        cout << (g>1?"NO":"YES") << "\n";
    }
    return 0;
}
