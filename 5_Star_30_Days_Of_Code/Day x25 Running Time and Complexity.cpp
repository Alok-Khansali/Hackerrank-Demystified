#include <bits/stdc++.h>
using namespace std;
long pr(long x,long y,long p)
{
    long r=1;
    x=x%p;
    while (y>0)
    {
        if (y&1)
            r=(r*x)%p;
        y/=2;
        x=(x*x)% p;
    }
    return r;
}
bool miillerTest(long d,long n)                              //Rabian-Miller Primality Test
{
    long a =2+rand()%(n-4),x=pr(a,d,n);
    if (x == 1 || x == n-1)
    return 1;
    while (d !=n-1){
        x =(x*x)%n;
        d*=2;
        if (x==1)   
          return 0;
        if (x==n-1)
         return 1;
    }
    return 0;
}
bool isPrime(long n, long k){
    if (n<=1 ||n==4) 
       return 0;
    if (n<=3) 
       return 1;
    long d =n-1;
    while (d % 2 == 0)
        d/=2;
    for (int i = 0; i <k; i++)
        if (!miillerTest(d,n))
            return 0;
    return 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while(n--){
        long t;
        cin>>t;
       if (isPrime(t, 6))
        cout<<"Prime\n";
    else 
    cout<<"Not prime\n";
    }
    return 0;
}
