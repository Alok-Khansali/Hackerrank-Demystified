#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>
using namespace std;    
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }     };
class Solution{
    public:
        Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }           
           return root;
           }         }
    void levelOrder(Node *r){                          //code begins
           int h=ht(r); 
           for(int i=1;i<=h;i++) 
                  pnt(r,i); 
    }
    void pnt(Node* r, int ll){ 
    if (r==NULL) 
        return; 
    if (ll==1) 
        cout<<r->data<<" "; 
    else if (ll>1){ 
        pnt(r->left,ll-1); 
        pnt(r->right,ll-1); 
        }  }
    int ht(Node* nd){ 
        if (nd==NULL) 
        return 0; 
          else{ 
        int l=ht(nd->left); 
        int r=ht(nd->right); 
        return(max(l+1,r+1));                //Code ends
       }  
    }   
 }; 
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
