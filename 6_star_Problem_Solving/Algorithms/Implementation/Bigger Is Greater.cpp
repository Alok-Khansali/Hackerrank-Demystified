#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int T;
    cin>>T;
    while(T--) {
        string w;
        cin>>w;
        cout << (next_permutation(w.begin(),w.end()) ? w : "no answer" ) << '\n';
    }
    return 0;
}
