#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    string s, ans = "";
    cin >> n >> k >> s;
    // for the one test case with wrongly given n
    // n = 10, but answers states a size of 8
    if (s.size() == n)
        n = n - k + 1;
    // To keep the xor of k bits 
    queue<int> q;
    ans += s[0];
    q.push(s[0] - '0');
    int xor_till_now = q.front(), current_bit = xor_till_now;
    for (int i = 1; i < n; i++)
    {
        if (q.size() == k)
        {
            // If the q already has k bits, remove the one in front
            // And xor it with the xor_so_far variable
            xor_till_now = xor_till_now ^ q.front();
            q.pop();
        }
        current_bit = xor_till_now ^ (s[i] - '0');
        q.push(current_bit);
        ans += to_string(current_bit);
        xor_till_now = xor_till_now ^ current_bit;
    }
    cout << ans << '\n';
    return 0;
}