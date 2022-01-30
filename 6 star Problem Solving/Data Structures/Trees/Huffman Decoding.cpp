void decode_huff(node * root, string s)   //Code to be Written in the editor 
{
    node *trav = root;
    int c = 0;
    while(c != s.size())
    {
        while(trav->right != NULL && trav->left != NULL)
        {
            if(s[c] == '1')          //1 means Go right
                trav = trav->right; 
            else                     //Else go left
                trav = trav->left;
            c++;                     //Just to prevent the out-of-bound error
        }
        cout << trav->data;          //Print the value held by the current node
        trav = root;                 //Reset after finding a value
    }
}