#include <bits/stdc++.h>
using namespace std;
int howManyGames(int st,int d,int f,int m) 
{
    int c=st,tt=m,x=0;
    while(tt>c)
    {
        tt-=c,c-=d,x++;
        if(c<=f)
              return(x+tt/f);
    }
    return(x);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int st,d,f,m;
    cin>>st>>d>>f>>m;
    cout <<howManyGames(st,d,f,m)<< "\n";
    return 0;
}
