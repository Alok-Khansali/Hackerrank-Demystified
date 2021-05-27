//You can also use a set and check if either x or y set has size ==1 
//  if true 
//    cout yes 
//  else 
//    cout no
#include <bits/stdc++.h>   
using namespace std;
int main()
{
    int n,a=1;
    cin >> n;
    int x[n],y[n];
    for (int i = 0; i < n; i++) 
        cin>>x[i]>>y[i];
     for (int i = 0; i < n-1; i++)
        if(x[i]!=x[i+1] && y[i]!=y[i+1] ) 
            {
                a=0;
                break;
            }
    puts((a)?"YES":"NO");
    return 0;
}


