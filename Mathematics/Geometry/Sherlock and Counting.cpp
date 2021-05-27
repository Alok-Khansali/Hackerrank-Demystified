#include <bits/stdc++.h>
using namespace std;
long solve(long n, long k) 
{
    if(n-4*k<=0)
      return(n-1);
    long c=n*(n-4*k),d=0;
    d=2*floor((n-ceil(sqrt(c)))/2);
    return(d);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int q,n,k ;
    cin>>q;
    for (int q_itr = 0; q_itr < q; q_itr++) 
    {
        cin>>n>>k;
        cout <<solve(n, k)<< "\n";
    }
    return 0;
}
