#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a[]={"one","two","three","four","five","six","seven","eight","nine","Greater than 9"};
    if(n>=1&n<=9)
      cout<<a[n-1];
    else
      cout<<a[9];
       return 0;
}
