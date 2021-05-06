#include <bits/stdc++.h>
using namespace std;
vector<int> solve(vector<int> a) 
{
    vector<int> v(1,a[0]);
    int i=0,x=0;
     for(int i=1;i<a.size();i++)
     {
         int x=a[i]*a[i-1],y=__gcd(a[i],a[i-1]);
         v.push_back(x/y);
     }
     v.push_back(a[a.size()-1]);
     return(v);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0;i <n;i++) 
          cin>>v[i];
        vector<int> result = solve(v);
        for (int result_itr = 0; result_itr < result.size(); result_itr++) 
            cout << result[result_itr]<<" ";
        cout << "\n";
    }
    return 0;
}
