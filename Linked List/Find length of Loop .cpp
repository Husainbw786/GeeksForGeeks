int countNodesinLoop(struct Node *head)
{
    // Code here
    bool flag = 0;
    Node* low = head;
    Node* high = head;
    while(high != NULL && high->next != NULL)
    {
        low = low->next;
        high = high->next->next;
        
        if(low == high)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        int count = 1;
        low = low->next;
    
    while(low != high)
    {
        count++;
        low = low->next;

    }
    return count;
    }
    return 0;
}
