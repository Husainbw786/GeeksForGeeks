int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int count1 = 0;
    int count2 = 0;
    Node* temp = head1;
    while(temp)
    {
        count1++;
        temp = temp->next;
    }
    temp = head2;
    while(temp)
    {
        count2++;
        temp = temp->next;
    }
    Node* Curr;
    int diff = 0;
    if(count1 - count2 > count2 - count1)
    {
        diff = count1 - count2;
        temp = head1;
        Curr = head2;
    }
    else
    {
        diff = count2 - count1;
        temp = head2;
        Curr = head1;
    }
    while(diff)
    {
        temp = temp->next;
        diff--;
    }
    while(Curr != temp)
    {
        temp = temp->next;
        Curr = Curr->next;
    }
    if(Curr != NULL)
    {
        return Curr->data;
    }
    return -1;
    
}
