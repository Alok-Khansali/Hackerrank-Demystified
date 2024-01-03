#include <bits/stdc++.h>
using namespace std;
int theLoveLetterMystery(string s) {
    int l=s.size(),c=0;
    string s1=s.substr(0,l/2),s2;
    if(l%2==0)
        s2=s.substr(l/2);
    else 
        s2=s.substr(l/2+1);
    for(int i=0;i<l/2;i++)
          if(s1[l/2-1-i]!=s2[i])
            c=c+abs((s1[l/2-1-i]-'a')-(s2[i]-'a'));
     return(c);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        cin>>s;
        int result = theLoveLetterMystery(s);
        cout << result << "\n";
    }
    return 0;
}
