/*//Using STL The Easier Way
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    unordered_set<int> st;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (t--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            cin >> x;
            st.insert(x);
            pq.push(x);
        }
        else if (x == 2)
        {
            cin >> x;
            if (pq.top() == x)
                pq.pop();
            st.erase(x);
        }
        else
        {
            while (st.find(pq.top()) == st.end())
                pq.pop();
            cout << pq.top() << '\n';
        }
    }
    return 0;
}
*/