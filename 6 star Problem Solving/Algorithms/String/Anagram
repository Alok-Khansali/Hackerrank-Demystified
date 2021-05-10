#include <bits/stdc++.h>
using namespace std;
int anagram(string s) 
{
   if(s.size()%2!=0)
     return(-1);
   vector<int> v(26,0);
   int t=0;
   for(int i=0;i<s.size()/2;i++)
     {
          v[s[i]-'a']++;
          v[s[i+s.size()/2]-'a']--;    
     }
   for(int i=0;i<26;i++)
        t+=abs(v[i]);
    return(t/2); 
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q;
    cin >> q;
    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        cin>>s;
        cout <<anagram(s)<< "\n";
    }
    return 0;
}
