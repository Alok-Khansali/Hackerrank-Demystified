SinglyLinkedListNode* reverse(SinglyLinkedListNode* h) 
{
      SinglyLinkedListNode* cur = h, *prev = NULL, *nxt = NULL;
        while (cur != NULL) 
        {
            nxt = cur->next;
            cur->next = prev;
            prev = cur;
            cur = nxt;
        }
        h = prev;
        return h;
}
