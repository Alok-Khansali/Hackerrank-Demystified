// Efficient soln:   using last set bit
#include <bits/stdc++.h>
using namespace std;
int maximizingXor(int l, int r) 
{
    int x =l^r,s=0,t=1,a=0;
    while(x)
        ++s,x>>=1;
    while(s--)
        a+=t,t<<=1;
    return(a);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l,r;
    cin>>l>>r;
    cout <<maximizingXor(l, r)<< "\n";
    return 0;
}