#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k,q,j;
    cin>>n>>k>>q;
    k%=n;
    vector<int> v(n),Q(q);
    for (int i = 0;i<n; i++) 
       cin>>v[i];
    for (int i = 0;i<q; i++) 
            cin>>Q[i];
    for(int i=0;i<q;i++)
        {
            if(Q[i]<k)
             j=n-k+Q[i];
            else 
              j=Q[i]-k;
            cout<<v[j]<<"\n";
        }
        return(0);
}
