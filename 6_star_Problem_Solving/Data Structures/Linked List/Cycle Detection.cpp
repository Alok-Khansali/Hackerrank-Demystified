bool has_cycle(SinglyLinkedListNode* head)    // Code to be written in the editor
{
         SinglyLinkedListNode* sl = head ,*fs = head;
        while(fs && fs->next)
        {
            sl=sl->next;
            fs=fs->next->next;
            if(sl==fs)
             return true;
        }
        return false;
}
