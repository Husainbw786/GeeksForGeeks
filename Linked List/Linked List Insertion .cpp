class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       // Your code here
       Node* temp = head;
       Node* newnode = new Node(x);
       newnode -> next = temp;
       head = newnode;
                 
       return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       // Your code here
       Node* temp = head;
       Node* newnode1 = new Node(x);
       if(head == NULL)
       {
           return newnode1;
       }
       while(temp->next != NULL)
       {
           temp = temp->next;
       }
       temp->next = newnode1;
       return head;
    }
};
