int getNode(SinglyLinkedListNode* head, int p) {
             SinglyLinkedListNode* nd=head;
             SinglyLinkedListNode* an=head;
             int c=0;
             if(head==NULL)
              return(nd->data);
            while (nd)  
              {
                  c++;
                  nd=nd->next;
              }
              for(int i=0;i<c-p-1;i++)
                 an=an->next;
        return(an->data);
}
