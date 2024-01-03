#include <bits/stdc++.h>
using namespace std;
void countApplesAndOranges(int s, int t, int a, int b, vector<int> ap, vector<int> o) {
     int ac=0,oc=0;
     for(int i=0;i<ap.size();i++)
         if((ap[i]+a)>=s &&(ap[i]+a)<=t)
          ac++;
    for(int i=0;i<o.size();i++)
         if((o[i]+b)>=s &&(o[i]+b)<=t)
          oc++;
        cout<<ac<<'\n'<<oc;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s,t,a,b,m,n;
    cin>>s>>t>>a>>b>>m>>n;
    vector<int> apples(m);
    for (int i = 0; i < m; i++) 
        cin>>apples[i];
    vector<int> oranges(n);
    for (int i = 0; i < n; i++) 
        cin>>oranges[i];
    countApplesAndOranges(s, t, a, b, apples, oranges);
   return 0;
}


