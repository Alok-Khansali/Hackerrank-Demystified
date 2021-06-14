#include <bits/stdc++.h>
using namespace std;
long long sumOfGroup(long long k)    // On closer inspection of the problem the answer is actually the cube of given integer
{
    long long x = k * k * k;
    return(x);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k;
    cin>>k;
    cout << sumOfGroup(k)<< "\n";
    return 0;
}
// PROOF FOR K^3 BASED SOLUTION
// The given summation will begin from           k * ( k - 1 ) + 1           
// Now that we the first term of the ARITHMETIC PROGRESSION (a), number of term in the sequence ( k )   and the common difference    ( 2 )   
//eg. 1 3 5 7 9   the common difference is 2
// Now all that is left, is to apply the summation formula of the AP.
// n(2 * a + (n - 1) * d) / 2             :::      k * (2 * (k * (k - 1) + 1) + (k - 1) *2)  / 2  = k ^ 3
