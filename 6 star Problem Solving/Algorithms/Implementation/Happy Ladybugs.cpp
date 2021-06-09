#include <bits/stdc++.h>
using namespace std;
string happyLadybugs(string b) {
    vector<int> v(26,0);
    int t=0;
    for(int i=0;i<b.size();i++)
      if(isalpha(b[i]))
         v[b[i]-'A']++;
      else 
       t++;
    for(int i=0;i<26;i++)
       if(v[i]==1)
          return("NO");
    for(int i=1;i<b.size()-1;i++)
      if((b[i]!=b[i-1])&&(b[i]!=b[i+1]) && t==0)
         return("NO");
    return("YES");
}
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
    int g,n;
    cin>>g;
    while(g--){
        cin>>n;
        string b;
        cin>>b;
        cout <<happyLadybugs(b)<< "\n";
    }
    return 0;
}
