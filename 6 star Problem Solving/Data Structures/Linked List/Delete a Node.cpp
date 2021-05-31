SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int pos) 
{
                  if(head==NULL)
                     return(head);
                     SinglyLinkedListNode* temp=head;
                  if(pos==0)
                     {
                          head=temp->next;
                          free(temp);
                          return(head);
                     }
                  for (int i=1;temp!=NULL&&i<pos;i++)
                           temp=temp->next;
                       if (temp==NULL)
                              return  head;
                  SinglyLinkedListNode *next = temp->next->next;
                       free(temp->next);
                  temp->next = next;
                  return(head);
}
