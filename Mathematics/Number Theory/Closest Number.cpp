#include <bits/stdc++.h>
using namespace std;
int closestNumber(int a, int b, int x) 
{
    if (b < 1)
       if(a != x)
         return 0;
       else
         return x;
    long long int y = (a == 1) ? 1 : pow(a,b), z = y % x;
    if(z <= x/2)
      return(y - z);
    return y + (x - z);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a,b,x;
    cin>>t;
    while(t--) {
        cin>>a>>b>>x;
        cout << closestNumber(a, b, x) << "\n";
    }
    return 0;
}
