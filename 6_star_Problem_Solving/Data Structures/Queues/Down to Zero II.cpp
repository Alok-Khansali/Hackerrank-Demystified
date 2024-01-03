// The Intuitive Dynammic Programming Approach
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    vector<int> done(1e6 + 1, 1e6 + 1);
    done[0] = 0, done[1] = 1;
    for (int i = 2; i <= 1000000; i++)
    {
        done[i] = min(done[i], 1 + done[i - 1]);
        for (int j = 2; j * j <= i; j++)
            if (i % j == 0)
                done[i] = min(done[i], 1 + done[i / j]);
    }
    while (t--)
    {
        cin >> n;
        cout << done[n] << '\n';
    }
    return 0;
}
// The Queue Approach, i had to understand
// A kind of BFS
#include <bits/stdc++.h>
using namespace std;
vector<int> done;
int downToZero(int n)
{
    queue<int> q;
    q.push(n);
    int ans = 0;
    while (!q.empty())
    {
        ans++;
        int x = q.size();
        // Each traversal of queue is a move
        for (int i = 0; i < x; i++)
        {
            // for every n there are two possibilities to eith break into factors
            // or go n - 1
            int val = q.front();
            q.pop();
            if (val <= 0)
                return ans + val - 1;
            done[val] = 1;
            if (done[val - 1] == 0)
                q.push(val - 1);
            for (int i = 2; i * i <= val; i++)
            {
                if (val % i == 0)
                    if (done[val / i] == 0)
                        q.push(val / i);
            }
        }
    }
    return ans - 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        done.assign(n + 1, 0);
        cout << downToZero(n) << '\n';
    }
    return 0;
}
