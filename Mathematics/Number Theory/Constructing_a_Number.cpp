#include <bits/stdc++.h>
using namespace std;
string canConstruct(vector<int> a) {
    long s=0;
    for(int i=0;i<a.size();i++)
      s+=a[i];
    return((s%3==0)?"Yes":"No");
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) 
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
          cin>>v[i];
        cout <<canConstruct(v)<< "\n";
    }
    return 0;
}
