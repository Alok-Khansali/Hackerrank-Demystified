#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
lli twoStacks(int mx,vector<int> a,vector<int> b) 
{
    lli c=0,s1=0,i=0,j=0;
    while(i<a.size() && s1+a[i]<=mx)
         s1+=a[i],i++;
    c=i;    
    while(j<b.size() && i>=0)
      {
          s1+=b[j],j++;
          while(s1>mx && i>0)
                i--,s1-=a[i];
          if(s1<=mx && i+j>c)
                c=i+j;
      }    
    return c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli g,n,m,mx;
    cin>>g;
    while(g--) {
        cin>>n>>m>>mx;
        vector<int> a(n),b(m);
        for (int i = 0; i < n; i++) 
            cin>>a[i];
        for (int i = 0; i < m; i++) 
            cin>>b[i];
        cout << twoStacks(mx,a,b) << "\n";
    }
    return 0;
}
