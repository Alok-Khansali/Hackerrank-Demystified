#include <bits/stdc++.h>
using namespace std;
string ts(string s1, string s2) 
{
      vector<int> v(26,0),w(26,0);
    for(int i=0;i<s1.size();i++)
        v[s1[i]-'a']++;
    for(int i=0;i<s2.size();i++)
        w[s2[i]-'a']++; 
    for(int i=0;i<26;i++)
      if(v[i]>0 && w[i]>0)
        return("YES");
    return("NO");
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for (int q_itr = 0; q_itr < t; q_itr++) {
        string s1,s2;
        cin>>s1>>s2;
        cout<<ts(s1,s2)<<"\n";
    }
    return 0;
}
