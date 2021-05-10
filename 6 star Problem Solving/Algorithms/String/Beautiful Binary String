#include <bits/stdc++.h>
using namespace std;
int beautifulBinaryString(string s) {
          int c=0;
          for(int i=0;i<s.size()-2;i++)
              if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')
              {
                  c++;
                  i+=2;
              }
         return(c);
}
int main()
{
    int n;
    cin >> n;
    string b;
    cin>>b;
    int result = beautifulBinaryString(b);
    cout << result << "\n";
    return 0;
}
