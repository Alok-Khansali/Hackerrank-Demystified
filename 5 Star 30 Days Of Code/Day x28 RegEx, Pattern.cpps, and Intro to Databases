#include <bits/stdc++.h>
#include <regex>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
     regex r(".+@gmail.com");
    vector<string> v;
    for(int i=1;i<=N;i++)
    {
        string s,n;
        cin>>n>>s;
        if(regex_match(s,r))
          v.push_back(n);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
      cout<<v[i]<<'\n';
    return 0;
}

