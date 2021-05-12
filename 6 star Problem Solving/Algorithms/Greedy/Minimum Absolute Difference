#include <bits/stdc++.h>
using namespace std;
int minimumAbsoluteDifference(vector<int> v) 
{
        int x=INT_MAX;
        sort(v.begin(),v.end());
        for (int i = 1; i <v.size(); i++) 
          x=min(x,v[i]-v[i-1]);
    return(x);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
       cin>> v[i];
    cout<< minimumAbsoluteDifference(v);
    return 0;
}
