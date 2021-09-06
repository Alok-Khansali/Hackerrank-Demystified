#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
int solve(lli x) 
{
   lli l=1,h=300000,a=0;
   while(l<=h)
   {
       lli m=(l+h)/2, s=(m*(m+1)*(2*m+1))/6;   //sum of first n squares
       if(s<=x)
         a=m,l=m+1;
       else
         h=m-1;
   }
   return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t,x;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) 
    {
        cin >> x;
        cout << solve(x) << '\n';
    }
    return 0;
}
