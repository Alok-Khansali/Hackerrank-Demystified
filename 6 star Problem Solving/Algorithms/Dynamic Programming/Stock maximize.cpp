#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long a[n+1], s = 0, x = 0;
        for(int i = 1;i<=n;i++)
          cin >> a[i]; 
        for(int i = n;i>0;i--)
        {
            if(a[i] >= x)
                x = a[i];
            s += x - a[i];
        }
        cout << s << '\n';
    }
    return 0;
}