#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int money,n;
        cin>>money>>n;
        unordered_map<int,int> m;
        vector<int> v(n,0);
        for (int i = 0; i < n; i++) 
            {
               cin>>v[i];
               m[v[i]]=(i+1); 
            } 
        for(int i=0;i<n;i++)
         if(m.find((money-v[i])) != m.end() && (i+1)!=m[money-v[i]])
         {
             cout<<(i+1)<<" "<<m[(money-v[i])]<<"\n";
             break;
         }
    }
    return 0;
}
