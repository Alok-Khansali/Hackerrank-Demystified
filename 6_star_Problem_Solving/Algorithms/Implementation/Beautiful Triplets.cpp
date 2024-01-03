#include <bits/stdc++.h>
using namespace std;
int beautifulTriplets(int d, vector<int> v) 
{
    int c=0,t,x;
    if(v.size()<3)
      return 0;
    for(int i=0;i<v.size()-2;i++,t=0)
    {
        x=v[i];
        for(int j=i+1;j<v.size();j++)
           {
               if((v[j]-x)==d)
                         x=v[j],++t;
              if(t==2)
                {
                    ++c;
                    break;
                }
           }
    }
       return(c);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n>>d;
    vector<int> v(n);
    for (int i =0;i<n;i++) 
        cin>>v[i];
    cout <<beautifulTriplets(d,v)<< "\n";
    return 0;
}
