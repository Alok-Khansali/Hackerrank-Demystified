void inOrder(Node *root) //Inorder : Left->Root->Right
    {
        if(root == NULL)
         return;
        inOrder(root->left);           //LEFT
        cout << root->data << ' ';     //ROOT
        inOrder(root->right);          //RIGHT
    }