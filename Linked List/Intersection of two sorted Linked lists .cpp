
Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* Curr = NULL;
    Node* result = NULL;
    
    while(ptr1 != NULL && ptr2 != NULL)
    {
        if(ptr1->data == ptr2->data)
        {
            Node* temp = new Node(ptr1->data);
            if(result == NULL)
            {
                result = temp;
            }
            else
            {
                Curr->next = temp;
                Curr = Curr->next;
            }
            Curr = temp;
          
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        else
        {
            if(ptr1->data < ptr2->data)
            {
                ptr1 = ptr1->next;
            }
            else
            {
                ptr2 = ptr2->next;
            }
        }
    }
        return result;
    
}
