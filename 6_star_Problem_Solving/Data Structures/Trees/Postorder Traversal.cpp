void postOrder(Node *root) //Post order : left->right->root
    {
         if(root == NULL)
         return;
         postOrder(root->left);         //LEFT
         postOrder(root->right);        //RIGHT
         cout << root->data << ' ';     //ROOT
    }