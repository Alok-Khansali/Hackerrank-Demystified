#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n,m;
        string s;
        cin>>n>>s>>m;
        for(int i=0;i<s.size();i++)
            if((int)s[i]>=65 && (int)s[i]<=90)
            {
                int a=s[i]-'A';
                cout<< (char)( (a+m) %26 + 'A');
            }
            else if((int)s[i]>=97 && (int)s[i]<=122)
                {
                    int a=s[i] - 'a';
                    cout<< (char)( (a+m) % 26 +'a');
                }
            else 
               cout<<s[i];
        return(0);
}
