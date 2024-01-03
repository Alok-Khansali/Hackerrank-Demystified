SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
              SinglyLinkedListNode* nd=new SinglyLinkedListNode(data);
              SinglyLinkedListNode* last=head;
              if(head==NULL)
                {
                    head=nd;
                    return nd;
                }
                else
                   while(last->next!=NULL) 
                     last=last->next;
                    last->next=nd;
                    return head;
}
