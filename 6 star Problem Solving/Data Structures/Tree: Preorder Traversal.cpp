void preOrder(Node *root)    //CODE TO BE WRITTEN IN THE EDITOR,          Preorder-Traversal: root->left->right
    {
         if(root == NULL)
         return;
         cout << root->data << ' ';    //ROOT
         preOrder(root->left);         //LEFT
         preOrder(root->right);        //RIGHT
    }
