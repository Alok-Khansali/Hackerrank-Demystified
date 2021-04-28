#include <bits/stdc++.h>
using namespace std;
string isBalanced(string s) 
{
  stack<char> st;
  for(int i=0;i<s.size();i++)
        if(s[i]=='{'||s[i]=='('||s[i]=='[')            // Starting brackets
           st.push(s[i]);
        else if((s[i]=='}'||s[i]==']'||s[i]==')') && st.empty())
          return("NO");
        else
        {
            if((s[i]==')' && st.top()=='(')||(s[i]=='}' && st.top()=='{')||(s[i]==']' && st.top()=='['))
              st.pop();
            else
            return ("NO");       // if invalid closing is used then return NO
        }
    if(st.empty())               // If there are more starting brackets stack wont be empty
      return("YES");
    else 
      return ("NO");
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    string s;
    for (int t_itr = 0; t_itr < t; t_itr++) 
    {
        cin>>s;
        cout <<isBalanced(s)<< "\n";
    }
    return 0;
}
