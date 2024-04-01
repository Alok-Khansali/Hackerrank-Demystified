#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, start = 0, end, area = 0, mn = INT_MAX;
    cin >> n;
    vector<int> h(n), lt(n), rt(n);
    stack<int> st, stt;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
        mn = min(mn, h[i]);
    }
    area = mn * n;
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && h[st.top()] >= h[i])
            st.pop();
        if (st.empty())
            rt[i] = n - 1;
        else
            rt[i] = st.top() - 1;
        st.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        while (!stt.empty() && h[stt.top()] >= h[i])
            stt.pop();
        if (stt.empty())
            lt[i] = 0;
        else
            lt[i] = stt.top() + 1;
        stt.push(i);
    }
    // for (int i = 0; i < n; i++) cout << rt[i] << ' ' << lt[i] << '\n';
    for (int i = 0; i < n; i++)
    {
        // cout << h[i] * (rt[i] - lt[i] + 1) << ' ';
        area = max(area, h[i] * (rt[i] - lt[i] + 1));
    }
    cout << area << "\n";
    return 0;
}