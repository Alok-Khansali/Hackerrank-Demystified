#include <bits/stdc++.h>
using namespace std;
vector<string> split_string(string);
string kangaroo(int x1, int v1, int x2, int v2) {
    if((x2>x1 && v2>v1)||(v1==v2))
      return("NO");
    if((x2-x1)%(v2-v1)==0)
      return("YES");
    return("NO");
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << "\n";
    return 0;
}
