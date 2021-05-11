#include <bits/stdc++.h>
using namespace std;
int gemstones(vector<string> v) 
{
    vector<int> x(26,0);
    int t=0,c=0;
    for(int i=0;i<v.size();i++)
      {
          string s=v[i];
          for(int j=0;j<s.size();j++)
            if(x[s[j]-'a']==t)
              x[s[j]-'a']++;
        t++;
      }
    for(int i=0;i<x.size();i++)
       if(x[i]==v.size())                 // all the characters that have the count value equal to the number of strings entered i.e. n
         c++;
    return(c);
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;                              // this 'n' we are taliking about
    cin >> n;
    vector<string> v(n);
    for (int i =0;i<n;i++) 
     cin>>v[i];
    cout <<gemstones(v);
    return(0);
}
