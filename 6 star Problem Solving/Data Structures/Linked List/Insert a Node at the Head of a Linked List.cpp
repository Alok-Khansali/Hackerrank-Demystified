SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* head, int data) {
              SinglyLinkedListNode* nd=new SinglyLinkedListNode(data);
              nd->next=head;        //Linking the new node with the head
              head=nd;              //Changing the address of the head
             return head;
}
