#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,r, p = 1;
    cin >> l >> r;
    l ^= r;                         //Get the xor
    while(p <= l)                    //Get the MSB for the xored value, the bit which can be manipulated
    {
        p *= 2;                     //Find the Nearest Power of 2 greater than xor val
    }
    cout << p - 1;                  //Subtract 1
    return 0;
}
/*
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
*/
