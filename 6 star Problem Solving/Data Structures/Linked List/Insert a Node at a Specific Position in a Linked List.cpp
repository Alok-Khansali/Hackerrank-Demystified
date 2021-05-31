SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int pos) {
               if(head==NULL)
                    return head;
             SinglyLinkedListNode* nd=new SinglyLinkedListNode(data);
             SinglyLinkedListNode* prev=head;
             for(int i=0;i<pos-1;i++)
                  prev=prev->next;
              nd->next=prev->next;        
              prev->next=nd;             
             return head;
}
