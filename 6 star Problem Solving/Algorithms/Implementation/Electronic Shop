#include <bits/stdc++.h>
using namespace std;
int getMoneySpent(vector<int> k, vector<int> d, int b) 
{
    int mx=0;
    for(int i=0;i<k.size();i++)
     for(int j=0;j<d.size();j++)
        if(k[i]+d[j]<=b && ((k[i]+d[j])>mx))
              mx=k[i]+d[j];
          return((mx!=0)?mx:-1);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int b,n,m;
    cin>>b>>n>>m;
    vector<int> ky(n),dr(m);
    for (int i= 0;i < n;i++) 
         cin>>ky[i];
    for (int i= 0;i< m;i++) 
       cin>>dr[i];
    cout <<getMoneySpent(ky, dr, b)<< "\n";
    return 0;
}

