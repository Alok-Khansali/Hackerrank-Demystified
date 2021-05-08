#include <bits/stdc++.h>
using namespace std;
string ap(int k, vector<int>v) {
    int c=0;
    sort(v.begin(),v.end());
    for(int i=0;i<(v.end()-v.begin());i++)
         if(v[i]<=0)
           c++;
        else 
          break;
    if(k>c)
     return("YES");
    return("NO");
}
int main()
{
    int t;
    cin >> t;
        while(t--)
    {      
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
           cin>>a[i];
        }
        string result = ap(k,a);
        cout << result << "\n";
    }
    return 0;
}
