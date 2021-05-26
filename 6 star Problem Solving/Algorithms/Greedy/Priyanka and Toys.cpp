#include <bits/stdc++.h>
using namespace std;
int toys(vector<int> v) 
{
    sort(v.begin(),v.end());
    int x=v[0]+4,c=1;
    for(int i = 0;i<v.size();i++)
         if(v[i]>x)
             x=v[i]+4,++c;
    return(c);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> w(n);
    for (int i = 0; i < n; i++) 
       cin >> w[i];
    cout << toys(w) << "\n";
    return 0;
}
