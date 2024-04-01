#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string s;
    cin >> n >> s;
    int ans = 0;
    // Blunt Brute force
    for (int i = 0; i < 26; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            char f = (char)('a' + i), sd = (char)('a' + j);
            if (f == sd)
                continue;
            int len = 0, fl = 0;
            for (char ch : s)
            {
                if (fl == 0)
                {
                    if (ch == f)
                        ++len, fl = 1;
                    else if (ch == sd)
                    {
                        fl = 2;
                        break;
                    }
                }
                else
                {
                    if (ch == sd)
                        ++len, fl = 0;
                    else if (ch == f)
                    {
                        fl = 2;
                        break;
                    }
                }
            }
            if (fl != 2 && len > 1)
                ans = max(ans, len);
        }
    }
    cout << ans;
    return 0;
}
// Approach 2 : Take the occurance of each character and check for all pairs