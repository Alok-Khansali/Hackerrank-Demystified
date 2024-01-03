#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=INT_MAX;
    cin >> n;
    vector<int> v(n);
    for (int i =0; i < n; i++) 
        cin>>v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-1;i++)
         if(v[i+1]-v[i]<m)
           m=v[i+1]-v[i];
    for(int i=0;i<v.size()-1;i++)
        if(v[i+1]-v[i]==m)
          cout<<v[i]<<" "<<v[i+1]<<" ";
    return 0;
}
