Node * insert(Node * root, int data) 
    {
        if(root == NULL)
        return new Node(data);
        if(root->data < data)
          root->right = insert(root->right,data);
        else
          root->left = insert(root->left,data);
        return root;
    }