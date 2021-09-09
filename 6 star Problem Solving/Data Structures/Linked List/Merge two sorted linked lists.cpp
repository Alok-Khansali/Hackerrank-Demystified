SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* h1, SinglyLinkedListNode* h2) 
{
    if(h1==NULL)
     return h2;
    if(h2==NULL)
     return h1;
    SinglyLinkedListNode *t = h1, *u = h2 , *a = new SinglyLinkedListNode(0) ;
    SinglyLinkedListNode *temp= a;
    while(t && u)
        if(t->data <= u->data)
           temp->next = t , temp =temp->next , t = t-> next;
        else
           temp->next = u , temp =temp->next , u = u-> next;
    while(t)
      temp->next = t , temp =temp->next , t = t-> next;
    while(u)
      temp->next = u , temp =temp->next , u = u-> next;
    return a->next;
}
