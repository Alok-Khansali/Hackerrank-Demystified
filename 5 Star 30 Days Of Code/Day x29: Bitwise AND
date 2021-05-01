#include <bits/stdc++.h>
using namespace std;
int bitwiseAnd(int n,int k) 
{
    int s=0;
    for(int i=1;i<n;i++)
      for(int j=i+1;j<=n;j++)
          if((i&j)>s && (i&j)<k)
              s=i&j;
     return(s);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int t_itr =0;t_itr<t;t_itr++) {
        int n,k;
        cin>>n>>k;
        cout<<bitwiseAnd(n,k)<< "\n";
    }
    return 0;
}
