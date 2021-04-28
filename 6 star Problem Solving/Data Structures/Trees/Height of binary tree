#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
}; 
class Solution {                 
    public:
        Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }
               return root;
           } }
        int height(Node* root){                      // Your code goes here
          if (root == NULL) 
        return -1; 
    else
    { 
        int l=height(root->left); 
        int r=height(root->right); 
        return(max(l+1,r+1));
    } 
   }                                               // And ends here
}; //End of Solution
int main() {
    Solution myTree;
    Node* root = NULL;
    int t;
    int data;
    std::cin >> t;
    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
    int height = myTree.height(root);
    std::cout << height;
    return 0;
}
