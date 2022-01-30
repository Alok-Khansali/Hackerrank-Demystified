#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    int t;
    cin >> t;
    vector<bool> v (101, false);
    for(int i =0;i<101;i++)
    {
        if(!v[i])
        {
            v[i+2] = true;
            v[i+3] = true;
            v[i+5] = true;
        }
    }
    while(t--)
    {
        int n ;
        cin >> n;
        cout << ((v[n]) ? "First" : "Second") << '\n';
    }
    return 0;
}