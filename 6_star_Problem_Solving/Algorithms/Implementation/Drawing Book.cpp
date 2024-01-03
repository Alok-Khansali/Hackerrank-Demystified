#include <bits/stdc++.h>
using namespace std;
int pageCount(int n, int p) 
{
    n=((n&1)?n:(n+1));
    if(p-1==min(p-1,n-p) && p-1!=n-p)
       return(p/2);
    return((n-p)/2);
}
int main() 
{
    int n,p;
    cin >> n>>p;
    cout <<pageCount(n, p)<< "\n";
    return 0;
}
