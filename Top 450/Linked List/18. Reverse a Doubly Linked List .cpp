Node* reverseDLL(Node * head)
{
    //Your code here
    if(head == NULL || head->next == NULL)
    {
        return head;
    }
    Node* prev = NULL;
    Node* Curr = head;
    while(Curr->next != NULL)
    {
        Curr = Curr->next;
    }
    head = Curr;
    Curr->next = Curr->prev;
    Curr->prev = NULL;
    Curr = Curr->next;
    while(Curr->prev != NULL)
    {
        Node* temp = Curr->next;
        Curr->next = Curr->prev;
        Curr->prev = temp;
        Curr = Curr->next;
    }
    Curr->prev = Curr->next;
    Curr->next = NULL;
    return head;
    
}
