#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,pt=0,s=0,p=0,d=0;
    cin >>n;
    queue<pair<long,long>> ps;     //Using pairs as the elements of teh queue
    for(int i= 0;i< n;i++){
           cin>>p>>d;
           ps.push({p,d});
       }
    for(int i=0;i<n;i++)
    {
        s=s+ps.front().first-ps.front().second;
        if(s<0)
        {
            s=d=0;
            pt=i+1;
        }
        ps.pop();
    }
    cout <<((pt==n)?-1:pt)<<"\n";           //if pt=-1 no solution
    return 0;
}
