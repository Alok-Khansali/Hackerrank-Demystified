//using total  bits – set bits.
#include <bits/stdc++.h>
using namespace std;
long sumXor(long n) 
{
    if(n==0)
      return(1);
    int x= (int)log2(n) + 1 - __builtin_popcountl(n);
    return(pow(2,x));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long n;
    cin>>n;
    cout<<sumXor(n);
    return 0;
}
