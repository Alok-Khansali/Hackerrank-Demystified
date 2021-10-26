DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* llist, int data)    //Code to be written in the editor
{
    DoublyLinkedListNode *trav = llist->next,*p2 = llist, *p1 = new DoublyLinkedListNode(data);
       if(data <= llist->data)                               //Head node insertion
       {
           p1->next = p2;
           llist->prev = p1;
           return p1;
       }
       while(trav)
       {
           if(trav->data > data)
           {
               trav->prev->next = p1;                         //Setting up links
               p1->prev = trav->prev->next;
               p1->next = trav;
               trav->prev = p1;
               return llist;
           }
           p2 = p2->next;
           trav = trav->next;
       }
       p2->next = p1;                                         //Tail node insertion
       p1->prev = p2;
       return llist;
}
