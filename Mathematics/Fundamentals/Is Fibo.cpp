#include <bits/stdc++.h>
using namespace std;
string isFibo(long double n) {                                                   //10^20 ke liye long double
    long double l=(5*(n*n))+4,s=(5*(n*n))-4,sl=round(sqrt(l)),ss=round(sqrt(s));          
    return((ss*ss==s||sl*sl==l) ? "IsFibo" : "IsNotFibo");                       // if 5n^2+4 or 5n^2-4  is a perfect square
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        long double n;
        cin>>n;
        cout <<isFibo(n)<<"\n";
    }
    return 0;
}
