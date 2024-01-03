DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) 
{
          if(llist == NULL || llist->next == NULL)
          return llist;
          DoublyLinkedListNode *curr = llist,*temp = NULL;
          while(curr)
          {
              temp = curr->prev;
              curr->prev = curr->next;
              curr->next = temp;
              curr = curr->prev;
          }
          if(temp)
            return temp->prev;
          return temp;
}
