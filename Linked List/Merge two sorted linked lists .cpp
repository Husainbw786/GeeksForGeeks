Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node* temp1 = head1;
    Node* temp2 = head2;

    Node* result = new Node(0);
    Node* list = result;
    
    while(temp1 != NULL && temp2 != NULL)
    {
        if(temp1->data > temp2->data)
        {
            list->next = temp2;
            temp2 = temp2->next;
        }
        else
        {
            list->next = temp1;
            temp1 = temp1->next;
        }
        list = list->next;
    }
    while(temp1)
    {
        list->next = temp1;
        temp1 = temp1->next;
        list = list->next;
    }
      while(temp2)
    {
        list->next = temp2;
        temp2 = temp2->next;
        list = list->next;
    }
    return result->next;
    
}  
