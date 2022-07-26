struct Node* partition(struct Node* head, int x) {
    // code here
    Node* less = new Node(0);
    Node* less_head = less;
    Node* equal = new Node(0);
    Node* equal_head = equal;
    Node* more = new Node(0);
    Node* more_head = more;
    Node* temp = head;
    
    while(temp)
    {
        if(temp->data < x)
        {
            less->next = temp;
            less = less->next;
        }
        
        if(temp->data == x)
        {
            equal->next = temp;
            equal = equal->next;
        }
        
        if(temp->data > x)
        {
            more->next = temp;
            more = more->next;
        }
        temp = temp->next;
    }
    more->next = NULL;
    equal->next = more_head->next;
    less->next = equal_head->next;
    
    return less_head->next;
    
