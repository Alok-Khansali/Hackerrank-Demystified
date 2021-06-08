#include <bits/stdc++.h>
using namespace std;
long flippingBits(long n) 
{
            bitset<32> a(n);
            return(a.flip().to_ulong());
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int q;
    cin>>q;
    for (int q_itr = 0; q_itr < q; q_itr++) 
    {
        long n;
        cin>>n;
        cout <<flippingBits(n)<< "\n";
    }
    return 0;
}
