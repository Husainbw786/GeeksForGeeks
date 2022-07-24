class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        // Code here
        Node* newNode = new Node(data);
        Node* Curr = head;
        while(Curr->next != NULL && Curr->data < data)
        {
            Curr = Curr->next;
            
        }
        newNode->next = Curr->next;
        Curr->next = newNode;
        if(newNode->data < Curr->data)
        {
            int temp = Curr->data;
            Curr->data = newNode->data;
            newNode->data = temp;
        }
     
        return head;
        
        
    }
};
