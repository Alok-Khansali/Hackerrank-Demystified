void levelOrder(Node *r) 
{                                     //CODE TO BE WRITTEN IN THE EDITOR
       int h=ht(r); 
           for(int i=1;i<=h;i++) 
                  pnt(r,i); 
    }
    void pnt(Node* r, int ll)
    { 
     if (r==NULL) 
        return; 
 
     if (ll==1) 
        cout<<r->data<<" "; 
     
      else if (ll>1)
        pnt(r->left,ll-1),pnt(r->right,ll-1); 
     
      int ht(Node* nd){ 
        if (nd==NULL) 
        return 0; 
          else{ 
        int l=ht(nd->left),r=ht(nd->right); 
        return(max(l+1,r+1));       
          }
     }   
