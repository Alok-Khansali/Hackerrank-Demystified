#include <bits/stdc++.h>
using namespace std;
vector<int> icecreamParlor(int m, vector<int> a) 
{
     vector<int> v(2,0);
     for(int i=0;i<a.size()-1;i++)
           if(find(a.begin()+i,a.end(),m-a[i])!=a.end())
             { 
                v[0]=i+1,v[1]=find(a.begin()+i+1,a.end(),m-a[i])-a.begin()+1;
                      return(v);
            }
    return(v);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for (int t_itr = 0; t_itr < t; t_itr++) 
      {
        int m,n;
        cin>>m>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) 
           cin>>v[i];
        vector<int> res= icecreamParlor(m, v);
            cout << res[0]<<" "<<res[1]<<"\n";
    }
    return 0;
}
