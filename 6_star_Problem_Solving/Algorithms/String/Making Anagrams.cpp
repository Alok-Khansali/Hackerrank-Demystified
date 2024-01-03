#include <bits/stdc++.h>
using namespace std;
int makingAnagrams(string s, string ss) {
        vector<int>s1(26,0),s2(26,0);
        int ans=0;
          for(int i=0;i<s.size();i++)
            s1[s[i]-'a']++;
          for(int i=0;i<ss.size();i++)
            s2[ss[i]-'a']++;
          for(int i=0;i<26;i++)
            if(s1[i]!=s2[i])
              ans+=abs(s1[i]-s2[i]);
        return(ans);
}
int main()
{
    string s,ss;
    cin>>s>>ss;
    cout << makingAnagrams(s, ss)<< "\n";
    return 0;
}
