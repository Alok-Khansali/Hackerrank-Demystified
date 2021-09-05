#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,c=0,s=0,e=0;
    cin >> n;
    vector<int> a(n),b(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b.begin(), b.end());
    for(int i=0;i<n;i++)
        if(a[i]!=b[i] && c == 0)
          c++, s=i;
        else if(a[i]!=b[i] && c != 0)
          c++, e=i;
    if(c==2)
      cout << "yes\nswap " << s+1 << ' ' << e+1;
    else
    {
        for(int i=s+1;i<=e;i++)
            if(a[i]>a[i-1])
            {
                c=-1;
                break;
            }
        if(c == -1)
            cout << "no\n";
        else
            cout << "yes\nreverse " << s+1 << ' ' << e+1;
    }
    return 0;
}
