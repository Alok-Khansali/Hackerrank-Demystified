#include <bits/stdc++.h>
using namespace std;
vector<long long> pythagoreanTriple(long long a) {
     vector<long long > v(3,0);
     if(a&1)
       v[0] = a, v[1] = (a*a)/2, v[2]=v[1]+1;
     else
       v[0] = a, v[1] = (a*a)/4 - 1, v[2] = v[1] + 2;
    return(v);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin>>a;
    vector<long long> triple = pythagoreanTriple(a);
    for (size_t i = 0; i < 3; i++) 
         cout << triple[i] << " ";
    return 0;
}
