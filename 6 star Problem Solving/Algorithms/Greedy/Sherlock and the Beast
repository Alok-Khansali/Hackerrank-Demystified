#include <bits/stdc++.h>
using namespace std;
void decentNumber(int n) {
    string s="";
    for(int i=n;i>=0;i--)  
        if((i%3==0) && ((n-i)%5==0))
        {
            for(int j=0;j<i;j++)
                s+='5';
            for(int j=0;j<n-i;j++)
                s+='3';
            break;
        }
    cout<<((s=="")?"-1":s)<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t,n=0;
    cin>>t;
    for (int t_itr = 0; t_itr < t; t_itr++)
        cin>>n,decentNumber(n);
    return 0;
}
