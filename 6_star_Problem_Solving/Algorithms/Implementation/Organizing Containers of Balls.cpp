#include <bits/stdc++.h>
using namespace std;
string organizingContainers(vector<vector<int>> c) {
    long long s=0,x=c.size();
    map<int,int> bl;
    for(int i=0;i<x;i++,s=0)
      {
        for (int j = 0; j < x; j++)
            s+=c[j][i];
        bl[s]++;        
      }
      for(int i=0;i<x;i++,s=0)
      {
        for (int j = 0; j < x; j++)
            s+=c[i][j];
        if(bl.find(s)==bl.end()||bl[s]==0)  
           return("Impossible");
        else 
              bl[s]--;     
      }
      return("Possible");
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q,n;
    cin>>q;
    while(q--) {
        cin>>n;
        vector<vector<int>> container(n,vector<int>(n,0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin>>container[i][j];
        cout << organizingContainers(container) << "\n";
    }
    return 0;
}
