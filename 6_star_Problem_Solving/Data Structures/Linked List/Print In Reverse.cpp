void reversePrint(SinglyLinkedListNode* head)   //wRITE THIS FUNCTION ONLY!!!
{
        if (head == NULL)  
             return;
         reversePrint(head->next);            //RECURSION
         cout<<head->data<<"\n";  
}  
