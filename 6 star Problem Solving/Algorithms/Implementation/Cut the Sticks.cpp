#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=1;
    cin >> n;
    int m=n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) 
        cin>>a[i];
    sort(a.begin(),a.end());
    cout<<n<<"\n";
    for(int i=0;i<n-1;i++)
      if(a[i]==a[i+1])
         c++;
         else 
            {
            cout<<m-c<<'\n';
            m=m-c;
            c=1;    
            }
    return 0;
}
