#include <bits/stdc++.h>
using namespace std;
int cookies(int k, priority_queue<int> v) 
{
    int c=0,x;
     while(v.top()>k && v.size()!=1)
     {
         x=v.top();
         v.pop();
         x+=(2*v.top());
         v.pop();
         v.push(x);
         ++c;
     }
     if(v.top()>k)
       return(-1);
     return(c);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    priority_queue<int> A;
    for (int i = 0; i < n; i++)
    {
          int x;
          cin>>x;
          A.push(-x);
    }
    cout <<cookies(-k, A)<< "\n";
    return 0;
}
