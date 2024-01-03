#include <bits/stdc++.h>
using namespace std;
int squares(int a, int b) {
    int sa=round(ceil(sqrt(a))),sb=round(floor(sqrt(b)));
    return(sb-sa+1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    for (int q_itr = 0; q_itr < q; q_itr++){
        int a,b;
        cin>>a>>b;
        cout<<squares(a,b)<<"\n";
    }
    return 0;
}

