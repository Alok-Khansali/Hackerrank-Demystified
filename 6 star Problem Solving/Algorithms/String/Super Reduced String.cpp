#include <bits/stdc++.h>
using namespace std;
string superReducedString(string s) 
{
      string a="";
      stack<char> st;
      for(int i=0;i<s.size();i++)
         if(st.empty()||st.top()!=s[i])
           st.push(s[i]);
         else
           st.pop();
      while(!st.empty())
          a=st.top()+a ,   st.pop();
      return( (a == ””)? "Empty String" : a);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    cout << superReducedString(s)<< "\n";
    return 0;
}
