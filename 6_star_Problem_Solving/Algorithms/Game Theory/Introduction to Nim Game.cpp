#include <bits/stdc++.h>
using namespace std;
string nimGame() 
{
       int n,x,s=0;
       cin >> n;
       for(int i  = 0;i <n;i++)
       {
           cin >> x;
           s ^= x;
       }
       if(s == 0)
       return "Second";
       return "First";
}
int main()   // A player has a winning strategy only when the Xor sum of values in the
             // Piles equates to a non-zero value;
{
    ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t;
        cin>>t;
        while(t--)
        {
           cout << nimGame() << '\n';
        }
    return 0;
}
