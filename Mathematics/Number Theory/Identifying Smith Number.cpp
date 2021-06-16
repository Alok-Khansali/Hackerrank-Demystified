#include <bits/stdc++.h>
using namespace std;
int solve(int n) 
{
    int s=0;
     for(int i=n;i>0;i/=10)
       s+=i%10;
     while(n%2==0)
           s-=2,n/=2;
    for(int i=3;i<=n;i+=2)
        while(n%i==0)
        {
           for(int j=i;j>0;j/=10)
            s-=j%10;
         n/=i;
        }
    return((s==0)?1:0);                               //1= yes 0=no
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cout <<solve(n)<< "\n";
    return 0;
}

