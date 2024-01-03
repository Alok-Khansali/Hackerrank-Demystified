#include <bits/stdc++.h>
using namespace std;
int getTotalX(long p,int l) 
{
        long c=0;
        for(int i=1;i<=l/p;i++)
            if(p*i>l)
              return (c);
            else if(l%(p*i)==0)
              c++;
    return(c);
}
int main()
{
    int n,m,l,g;
    long p=1;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(m);
    cin>>a[0];
    g=p=a[0];
    for (int i =1 ; i<n; i++) {
        cin>>a[i];
        g=__gcd(a[i],g);
        p*=a[i];
        p/=g;
        if(g==1)
        g=(p);
    }
    cin>>b[0];
    l=b[0];
    for (int i = 1; i<m; i++) 
    {
        cin>>b[i];
        l=__gcd(b[i],l);
    }
        int total = getTotalX(p,l);
    cout << total << "\n";
    return 0;
}


