Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* Curr = NULL;
    Node* ans = NULL;
    
    while(ptr1 != NULL && ptr2 != NULL)
    {
        if(ptr1->data == ptr2->data)
        {
              Node* list = new Node(ptr1->data);
             
              if(ans ==NULL)
              {
                  ans = list;
              }
              else
              {
                  Curr->next = list;
                  Curr = Curr->next;
              }
              Curr = list;
              ptr1 = ptr1->next;
              ptr2 = ptr2->next;
        }
        else
         {
           if(ptr1->data > ptr2->data)
            {
              ptr2 = ptr2->next;
            }
            else
            {
              ptr1 = ptr1->next;
            } 
        }
    }
    
    return ans;
}
