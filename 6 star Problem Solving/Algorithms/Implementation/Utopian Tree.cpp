#include <bits/stdc++.h>
using namespace std;
int utopianTree(int n) {
    long long s=1;
    for(int i=1;i<=n;i++)
      // s=((i&1)?2*s:s+1);       if u like smaller codes
         if(i%2==0)
            s+=1;
          else 
           s=2*s;
    return(s);
}
int main()
{
    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        int result = utopianTree(n);
        cout << result << "\n";
    }
    return 0;
}
