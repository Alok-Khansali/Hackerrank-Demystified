#include <bits/stdc++.h>
using namespace std;
long theGreatXor(long x) 
{
        long y=1,c=0;
        while(x)
        {
            if(x%2==0)
              c+=y;
            y<<=1,x>>=1;
        }
        return(c);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin>>q;
    for (int q_itr = 0; q_itr< q; q_itr++) {
        long x;
        cin>>x;
        cout<< theGreatXor(x)<<"\n";
    }
    return 0;
}
