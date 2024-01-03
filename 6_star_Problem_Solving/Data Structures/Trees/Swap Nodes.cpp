#include <bits/stdc++.h>
using namespace std;
// Class to create tree
class Node
{
public:
    int val;
    Node *left, *right;
    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};
// Depth of the tree, tracking
unordered_map<int, vector<Node *>> dp;
// First Node
Node *head = new Node(1);
// To get the Inorder Traversal
void inorder(Node *r, vector<int> &v)
{
    if (r == NULL)
        return;
    // Left Root Right
    inorder(r->left, v);
    v.push_back(r->val);
    inorder(r->right, v);
}
vector<vector<int>> swapNodes(vector<int> queries, int max_depth)
{
    vector<vector<int>> ans;
    for (int i : queries)
    {
        int f = 1;
        while (i * f <= max_depth)
        {
            // cout << i * f << ' ';
            for (Node *r : dp[i * f])
            {
                Node *tp = r->left;
                r->left = r->right;
                r->right = tp;
            }
            f++;
        }
        vector<int> v;
        inorder(head, v);
        ans.push_back(v);
    }
    return ans;
}

int main()
{
    int n, queries, curr_depth = 0, len = 1;
    cin >> n;
    queue<Node *> q;
    q.push(head);
    dp[++curr_depth].push_back(head);
    while (!q.empty())
    {
        curr_depth++;
        int lt, rt;
        for (int i = 0; i < len; i++)
        {
            cin >> lt >> rt;
            Node *curr = q.front();
            q.pop();
            if (lt != -1)
            {
                curr->left = new Node(lt);
                q.push(curr->left);
                dp[curr_depth].push_back(curr->left);
            }
            if (rt != -1)
            {
                curr->right = new Node(rt);
                q.push(curr->right);
                dp[curr_depth].push_back(curr->right);
            }
        }
        len = q.size();
    }
    // Maximum depth of the tree
    int max_depth = dp.size();
    // cout << max_depth << '\n';
    /* // Checking the values at what height for (auto i : dp) { cout << i.first << '\n'; for (auto j : i.second) cout << j->val << ' '; cout << '\n';   } */
    cin >> queries;
    // Vector to store the queries
    vector<int> qu(queries, 0);
    for (int i = 0; i < queries; i++)
        cin >> qu[i];

    // Printing the queries
    vector<vector<int>> ans = swapNodes(qu, max_depth);
    for (vector<int> v : ans)
    {
        for (int i : v)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}