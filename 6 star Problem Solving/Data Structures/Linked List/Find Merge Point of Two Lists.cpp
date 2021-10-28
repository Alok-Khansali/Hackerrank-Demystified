int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) 
{
     unordered_map<SinglyLinkedListNode*,int> mp;
     while(head1)
     {
         mp[head1] = head1->data;
         head1 = head1->next;
     }
     while(head2)
     {
         if(mp.find(head2) != mp.end())
           return head2->data;
        head2=head2->next;
     }
    return 0;
}
