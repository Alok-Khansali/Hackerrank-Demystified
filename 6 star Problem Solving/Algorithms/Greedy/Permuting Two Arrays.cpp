#include <bits/stdc++.h>
using namespace std;
string twoArrays(int k, vector<int> a, vector<int> b) 
{
       sort(a.begin(),a.end());
       sort(b.begin(),b.end(),greater<int>());
       for (int i = 0; i < a.size(); i++) 
           if(a[i]+b[i]<k)
               return("NO");
       return("YES");
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
        int t;
        cin>>t;
        while(t--)
       {
        int n,k;
        cin>>n>>k;
        vector<int> a(n),b(n);
        for (int i = 0; i < n; i++) 
           cin>>a[i];
        for (int i = 0; i < n; i++) 
           cin>>b[i];
        cout << twoArrays(k, a, b) << "\n";
    }
    return 0;
}
