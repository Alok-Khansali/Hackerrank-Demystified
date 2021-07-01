#include <bits/stdc++.h>
using namespace std;
int findDigits(int n) {
    int m=n,c=0;
    while(m>0)
    {
        int r=m%10;
        if(r!=0 &&n%r==0)
          c++;
        m/=10;
    }
    return(c);
}
int main()
{
    int t;
    cin >> t;
    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        int result = findDigits(n);
        cout << result << "\n";
    }
    return 0;
}
