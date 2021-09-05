bool compare_lists(SinglyLinkedListNode* h1, SinglyLinkedListNode* h2)    //Code to be written in the editor
{
       while(h1 && h2)
       {
         if(h1->data != h2->data)
           return 0;
           h1=h1->next;
           h2=h2->next;
       }
       while(h1 || h2)
         return 0;
       return 1;
}
