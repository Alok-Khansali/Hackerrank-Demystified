#include <bits/stdc++.h>
using namespace std;
string catAndMouse(int x, int y, int z) {
            if(abs(y-z)==abs(z-x))
             return("Mouse C");
             if(abs(z-x)>abs(z-y))
             return("Cat B");
return("Cat A");
}
int main()
{
      ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    cin >> q;
    for (int q_itr = 0; q_itr < q; q_itr++) {
        int x,y,z;
        cin>>x>>y>>z;
        string result = catAndMouse(x, y, z);
        cout << result << "\n";
    }
    return 0;
}
