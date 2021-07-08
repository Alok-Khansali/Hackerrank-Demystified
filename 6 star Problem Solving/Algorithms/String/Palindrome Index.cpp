#include <bits/stdc++.h>
using namespace std;
int palindromeIndex(string &s) 
{
    int c=0,d=0;
      for(int i=0;i<s.size()/2;i++)
             if(s[i]!=s[s.size()-i-1])
              { 
                  c++;
               if(c==1)
                  {

                      if(s[i]==s[s.size()-i-2] && s[i+1]==s[s.size()-i-3])
                         d=s.size()-i-1;
                      else
                        d=i;
                    s=s.substr(0,d)+s.substr(d+1);
                  }
                else
                  break;
            }
      return((c%2==0)?-1:d);
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
        cout <<palindromeIndex(s)<< "\n";
    }
    return 0;
}
