void printLinkedList(SinglyLinkedListNode* head) {                // just write this function and its done
      while(head!=NULL){
          cout<<head->data<<"\n";
          head=head->next;
      }
}
