Node* deleteNode(Node *head,int x)
{
    //Your code here
    if(head == NULL)
    {
        return NULL;
    }
    if(x==1)
    {
        head = head->next;
        return head;
    }
    Node* temp = head;
    int i;
    for(i=1;i<x-1;i++)
    {
        temp = temp->next;
    }
    Node* del = temp->next;
    temp->next = temp->next->next;
    delete(del);
    
    return head;
}
