#include <bits/stdc++.h>
using namespace std;
string hackerrankInString(string s) {
     int c=0;
    char a[]={'h','a','c','k','e','r','r','a','n','k'};
    for(int i=0;i<s.size();i++){
      if(s[i]==a[c])
          c++;
       if(c==10)
        return("YES");
       }
     return("NO");
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        cin>>s;
        cout << hackerrankInString(s) << "\n";
    }
    return 0;
}
