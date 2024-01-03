#include <bits/stdc++.h>
using namespace std;
int birthday(vector<int> v, int d, int m) 
{
   int c=0,s=0;
   for(int i=0;i<=v.size()-m;i++,s=0)
   {
     for(int j=0;j<m;j++)
        s+=v[i+j];
     if(s==d)
      c++;
   }
   return(c);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,d,m;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) 
       cin>>v[i];
    cin>>d>>m;
    cout <<birthday(v,d,m)<< "\n";
    return 0;
}
