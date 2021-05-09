#include <bits/stdc++.h>        
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);    
    int n,k,c=0;
    cin>>n>>k;
   int v[n];
    for (int i = 0; i < n; i++)
       cin>>v[i];
    sort(v,v+n);
    for(int i=0;i<n;i++)
      if(binary_search(v+i,v+n,v[i]+k))
      c++;
      cout<<c;
    return 0;
}
