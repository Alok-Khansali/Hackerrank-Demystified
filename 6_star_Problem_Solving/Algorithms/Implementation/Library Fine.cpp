#include <bits/stdc++.h>
using namespace std;
int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
    int rd,rm,ry,d,m,y,f=0;
    cin>>rd>>rm>>ry>>d>>m>>y;
    if(ry>y)
       f=10000;
    else if(y==ry)
        if(rm>m)
          f=(rm-m)*500;
        else if(rm==m && rd>d)
              f=(rd-d)*15;
    cout<<f<<"\n";
    return 0;
}
