#include <bits/stdc++.h>
using namespace std;
string funnyString(string s) {
            for(int i=0;i<s.size()-1;i++)
               if(abs((s[i]-s[i+1]))!=abs(s[s.size()-1-i]-s[s.size()-2-i]))
                  return("Not Funny");
            return("Funny");
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
        string result = funnyString(s);
        cout << result << "\n";
    }
    return 0;
}
