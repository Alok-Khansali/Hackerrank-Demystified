#include <bits/stdc++.h>
using namespace std;
vector<int> absolutePermutation(int n, int k) 
{
    vector<int> v(n);
    if(k==0)
     {
       for(int i=0;i<n;i++)
         v[i]=i+1;
        return v;
     }
    if(n%2 == 0)                           //process only if n is even
     if(n % k == 0 && n/k % 2 == 0)
     {
         int z = k , x = 2 * k,y=0;
         while(++z <= x)
             for(int i = z - k - 1,j=0;i<n;i+=x,j++)
               v[i] = z + x * j;
        while(++y <= k) 
            for(int i=k + y - 1,j=0;i<n;i += x,j++)
               v[i] = y + x * j;
        return v;
     }
     return {-1};
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,k;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) 
    {
        cin >> n >> k;
        vector<int> result = absolutePermutation(n, k);
        for (size_t i = 0; i < result.size(); i++) 
            cout << result[i] << ' ';
        cout << '\n';
    }
    return 0;
}
