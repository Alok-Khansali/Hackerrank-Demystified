Node *lca(Node *root, int v1,int v2)  //Code to write in the editor
    {
		if(v1 < v2)
        swap(v1,v2);
        Node* t = root;
        while(t)
        {
            int x = t->data;
            if((v2 < x && v1 > x) || v2 == x || v1 == x)
             return t;
            else if(v2 < x && v1 < x)
             t = t->left;
            else 
             t = t->right;
        }
        return t;
    }

};