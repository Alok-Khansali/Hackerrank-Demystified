#include <bits/stdc++.h>
using namespace std;
int beautifulDays(int i, int j, int z) {
    string s;
    int c=0;
    for(int k=i;k<=j;k++)
    {
        s=to_string(k);
        if(s.size()!=1)
         reverse(s.begin(),s.end());
        int x=stoi(s);
        if(abs(x-k)%z==0)
          c++;        
    }
    return c;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i,j,k; 
    cin>>i>>j>>k;
    int result = beautifulDays(i, j, k);
    cout<<result;
    return 0;
}
