#include <bits/stdc++.h>
using namespace std;
long strangeCounter(long t) 
{
    long i=1,s=0;
    while(s<t)
        s+=3*i,i*=2;
    return(s-t+1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long t;
    cin >> t;
    cout<<strangeCounter(t)<<'\n';
        return 0;
}
