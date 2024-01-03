//MY INITIAL APPROACH
#include <bits/stdc++.h>
using namespace std;
int lonelyinteger(vector<int> v) 
{
    if(v.size()==1)
      return(v[0]);
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i+=2)
       if(v[i]!=v[i+1])
         return(v[i]);
    return(v[v.size()-1]);    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
     cin>>a[i];
    int result = lonelyinteger(a);
    cout << result << "\n";
    return 0;
}

//BOSS MODE SOLUTION
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,r=0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
     cin>>a[i];
     r^=a[i];
     }
    cout <<r<< "\n";
    return 0;
}
