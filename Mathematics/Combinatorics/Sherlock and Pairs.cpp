#include <bits/stdc++.h>   //If by mistake u used int somewhere change it to long long or long long int, otherwise even with the right logic u will only pass 3 testcases
using namespace std;
typedef long long int lli;
lli solve(vector<lli> a) 
{
    lli s=0;
    map<lli,lli> m;
     for(lli i=0;i<a.size();i++)
         m[a[i]]+=1;
    for (auto i:m)
        s+=(i.second*(i.second-1));
    return(s);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<lli> a(n);
        for (int i = 0; i < n; i++) 
         cin>>a[i];
        cout << solve(a)<< "\n";
    }
    return 0;
}
