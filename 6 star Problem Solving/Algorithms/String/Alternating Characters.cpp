#include <bits/stdc++.h>
using namespace std;
int alternatingCharacters(string s) {
    int c=0;
           for(int i=0;i<s.size()-1;i++)
                 if(s[i]==s[i+1])
                    c++;
             return(c);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    string s;
    for (int q_itr = 0; q_itr < q; q_itr++) {
        cin>>s;
        int result = alternatingCharacters(s);
        cout << result << "\n";
    }
    return 0;
}
