#include <bits/stdc++.h>
using namespace std;
string isValid(string s) 
{
    vector<int> v(26,0),val(2,0),oc(2,0);
    for(int i=0;i<s.size();i++)
       v[s[i]-'a']++;
    sort(v.begin(),v.end(),greater<int>());
    val[0]=v[0],  oc[0]=1;
    int r=0;
    for(int i=0;i<25;i++)
        if(v[i]==v[i+1])
              oc[r]++;
        else if(v[i+1]==0)
          break;
        else
           {
               r++;
               if(r>1)
                return("NO");
               val[r]=v[i+1],  oc[r]=1;
           }
    if(r==0||(val[1]==1 && oc[1]==1)||(oc[0]==1 && val[0]-val[1]==1))
        return("YES");
    return("NO");
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
    cout <<isValid(s)<< "\n";
    return 0;
}
