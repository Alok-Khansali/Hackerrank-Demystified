#include <bits/stdc++.h>
using namespace std;
string gameOfThrones(string s) {
        vector<char> v(26,0);
        int np=0;
        for(int i=0;i<s.size();i++)
           v[s[i]-'a']++;
        for(int i=0;i<26;i++)
          if(v[i]==1|| v[i]%2==1)
            {
                np++;
                if(np==2)
                 return("NO");
            }
        return("YES");
}
int main()
{
    string s;
    getline(cin, s);
    string r = gameOfThrones(s);
    cout<<r;
    return 0;
}
