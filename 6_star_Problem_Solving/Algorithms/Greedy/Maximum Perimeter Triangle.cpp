#include <bits/stdc++.h>
using namespace std;
vector<int> maximumPerimeterTriangle(vector<int> s) 
{
    vector<int> v(3,0);
    sort(s.begin(),s.end(),greater<int>());
     for(int i=0;i<s.size()-2;i++)
          if(s[i]+s[i+1]>s[i+2]&&s[i+2]+s[i+1]>s[i]&&s[i+2]+s[i]>s[i+1])
            {
                v[0]=s[i],v[1]=s[i+1],v[2]=s[i+2];
                return(v);
            }
     return(v);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> sticks(n);
    for (int i = 0; i < n; i++)
        cin>>sticks[i];
   vector<int> r=maximumPerimeterTriangle(sticks);
   if(r[0]==0)
     cout<<"-1\n";
    else
      cout<<r[2]<<" "<<r[1]<<" "<<r[0];
    return 0;
}
