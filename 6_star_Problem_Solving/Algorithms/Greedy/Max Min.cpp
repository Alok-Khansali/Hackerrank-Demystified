#include <bits/stdc++.h>
using namespace std;
int maxMin(int k, vector<int> v) 
{
    sort(v.begin(),v.end());
    int x=INT_MAX;
    for(int i=0;i<=v.size()-k;i++)
      if((v[i+k-1]-v[i])<x)
            x=v[i+k-1]-v[i];
    return(x);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin >> n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
       cin>>v[i];
    cout <<maxMin(k,v)<< "\n";
    return 0;
}

