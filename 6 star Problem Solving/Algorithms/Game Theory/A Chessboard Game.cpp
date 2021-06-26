#include <bits/stdc++.h>
using namespace std;
string chessboardGame(int x, int y) 
{
   if(x==0||x==3||y==0||y==3)
     return("First");
    return("Second");
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--) 
    {
        int x,y;
        cin>>x>>y;
        cout <<chessboardGame(x%4, y%4)<< "\n";
    }
    return 0;
}
