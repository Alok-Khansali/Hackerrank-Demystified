#include <bits/stdc++.h>
using namespace std;
int surfaceArea(vector<vector<int>>v,int p,int h,int w) 
{
   long s=2*p;
   for(int i=0;i<w;i++)
      s+=v[0][i]+v[h-1][i];
    for(int i=0;i<h;i++)              
      s+=v[i][0]+v[i][w-1];
    for(int i=0;i<h;i++)
      for(int j=1;j<w;j++)
               s+=abs(v[i][j]-v[i][j-1]);
    for(int i=0;i<w;i++)
        for(int j=1;j<h;j++)
             s+=abs(v[j][i]-v[j-1][i]); 
    return(s); 
}
int main()
{
    int h,w;
    cin>>h>>w;
    vector<vector<int>>v(h,vector<int>(w));
    for(int i=0;i<h;i++)
        for (int j=0;j<w;j++)
            cin >>v[i][j];
    cout <<surfaceArea(v,(h*w),h,w)<< "\n";
    return 0;
}

