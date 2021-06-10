#include <bits/stdc++.h>
using namespace std;
long repeatedString(string s, long n) {
    long l=s.size(),c=0,o=n/l;
    for(int i=0;i<l;i++)
      if(s[i]=='a')
        c++;
    o=o*c;
    for(int i=0;i<n%l;i++)
      if(s[i]=='a')
       o++;
    return(o);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    long n;
    cin >> n;
    cout <<repeatedString(s, n)<< "\n";
    return 0;
}
