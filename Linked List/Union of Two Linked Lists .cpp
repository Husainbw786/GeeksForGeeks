struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    set<int>st;
    Node* temp = head1;
    Node* temp2 = head2;
    while(temp)
    {
        st.insert(temp->data);
        temp = temp->next;
    }
    
    while(temp2)
    {
        st.insert(temp2->data);
        temp2 = temp2->next;
    }
    Node* list = new Node(0);
    Node* head = list;
  
    for(auto & x : st)
    {
        list->next = new Node(x);
        list = list->next;
    }
    head = head->next;
    return head;
    
}
