#include <bits/stdc++.h>
using namespace std;
long zeroes(long n,long x)
{
    long s=0;
    while(x>0)
      s+=x/5,x/=5;
    return(s);
}
long solve(long n) 
{
    if(n<5)
      return(n*5);
    long x=0,y=5*n;
    while(x<y)                   //some searching ofcourse :))
        if(zeroes(n,(x+y)/2)>=n)
           y=(x+y)/2;
        else 
           x=(x+y)/2+1;
    return(x);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) 
    {
        long n;
        cin >> n;
        cout <<solve(n) << "\n";
    }
    return 0;
}
