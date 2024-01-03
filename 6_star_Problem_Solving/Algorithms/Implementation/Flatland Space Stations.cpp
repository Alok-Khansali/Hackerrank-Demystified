#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m,mx;
    cin>>n>>m;
    vector<int> c(m);
    for (int i = 0; i < m; i++) 
         cin>>c[i];
    if(n==m)
      cout<<"0";
    else
    {
        sort(c.begin(),c.end());
        mx=max(c[0],(n-1-c[m-1]));
        for (int i = 1; i < m; i++) 
            mx=max(mx,(c[i]-c[i-1])/2);
        cout << mx<< "\n";
    }
    return 0;
}
