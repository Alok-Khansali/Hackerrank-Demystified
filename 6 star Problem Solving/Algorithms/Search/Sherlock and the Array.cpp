#include <bits/stdc++.h>
using namespace std;
string balancedSums(vector<int> v)
{
  if(v.size()==1)
    return("YES");
      int p=0,q=v.size()-1;
      long l=v[p],r=v[q];
  while(q>p)
        if(l<r)
          while(l<r)
            l+=v[++p];
        else if(r<l)
          while(r<l)
            r+=v[--q];
        else if(l==r && q-p==2)
          return("YES"); 
        else 
          l+=v[++p],r+=v[--q];  
   if(q==p && l==r)
     return("YES");
  return("NO");
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t=0;
    cin>>t;    
    for (int j=0;j<t;j++) 
    {
        int n=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
          cin>>v[i];
        cout <<balancedSums(v)<< "\n";
    }
    return 0;
}
