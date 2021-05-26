#include <bits/stdc++.h>
using namespace std;
int saveThePrisoner(int n, int m, int s) {
    int x=0;
    if(m%n==0)
      x=(s==1)?n:s-1;
    else
     x=(s+(m%n)-1);
    return((x>n)?(x%n):x);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        int n,m,s;
        cin >> n >> m >> s;
        cout <<saveThePrisoner(n, m, s)<< "\n";
    }
    return 0;
}
