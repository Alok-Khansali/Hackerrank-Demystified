bool tell_me(Node* r, int mn, int  mx)
    {
          if(r == NULL)   //If NULL return 1, as && is used extra ones dont affectthe procedure
              return 1;
          if(r->data < mn || r->data > mx)   //It is obvious
              return 0;
          return (tell_me(r->left, mn, r->data-1) && tell_me(r->right, r->data+1,mx));
    }
	bool checkBST(Node* root) 
    {
		return tell_me(root,-1,10000);
	}