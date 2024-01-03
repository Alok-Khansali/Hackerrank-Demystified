#include <bits/stdc++.h>
using namespace std;
void rev(stack<int>& i,stack<int>& o)
{
    while(!i.empty())
    {
        o.push(i.top());
        i.pop();
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    int n,t,v;
    cin>>n;
    stack<int> i,o;
    while(n--)
    {
        cin>>t;
        if(t==1)
        {
            cin>>v;
            i.push(v);
        }
        else 
        {
            if(o.empty())
               rev(i,o);
            if(t==2)
              o.pop();
            else
              cout<<o.top()<<"\n";
        }
    }
    return 0;
}
