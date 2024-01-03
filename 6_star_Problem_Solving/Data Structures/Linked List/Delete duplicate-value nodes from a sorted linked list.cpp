SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) 
{
            SinglyLinkedListNode* nd=head,*p=NULL;
             /* if(nd==NULL)
                  return(head);   */
            while (nd->next!=NULL)
               if (nd->data==nd->next->data)
               {
                p=nd->next->next;
                delete(nd->next);
                nd->next=p;
               }
               else
                 nd=nd->next;
            return(head);
}
