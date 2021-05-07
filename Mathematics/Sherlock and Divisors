#include <bits/stdc++.h>
using namespace std;
int divisors(int n) {
    if(n%2==1)
      return(0);            
    int c=0;
    for(int i=1;i<=sqrt(n);i++)
        if(n%i==0)
        {
           if(i%2==0)
             c++;
           if((n/i)%2==0 &&(n/i!=i))
             c++;
        }
    return(c);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) 
    {
        int n;
        cin>>n;
        cout<<divisors(n)<< "\n";
    }
    return 0;
}
