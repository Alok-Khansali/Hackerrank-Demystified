#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
          int n,k;
          cin>>n>>k;
          vector<int> v(n),a(n);
          for(int i=0;i<n;i++)
            if(i%2==0)
             v[i]=(n-1-i/2);
            else 
               v[i]=i/2;     
          cout<<find(v.begin(),v.end(),k)-v.begin()<<"\n";
    }
    return 0;
}
