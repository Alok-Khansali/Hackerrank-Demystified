/*
The idea is to keep all the nodes that lie on the outer boundary of the tree
This can be checked by using BFS
Assume that the root is at the centre of the X axis, at 0,
any node to its left will have negative coordinates
Nodes to its right will have positive coordinate
Everytime a new coordinate is seen it is stored
Lastly sort the values as per the coordinates and print
*/
void topView(Node *root)
{
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    vector<vector<int>> nodes;
    while (!q.empty())
    {
        int len = q.size();
        for (int i = 0; i < len; i++)
        {
            Node *temp = q.front().first;
            int pos = q.front().second;
            q.pop();
            if (st.find(pos) == st.end())
            {
                nodes.push_back({pos, temp->data});
                st.insert(pos);
            }
            if (temp->left)
                q.push({temp->left, pos - 1});
            if (temp->right)
                q.push({temp->right, pos + 1});
        }
    }
    sort(nodes.begin(), nodes.end());
    for (vector<int> p : nodes)
        cout << p[1] << ' ';
}