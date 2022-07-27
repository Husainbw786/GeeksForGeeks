class Solution
{
    Node* reverse(Node* head)
    {
        Node* prev = NULL;
        Node* next = NULL;
        Node* Curr = head;
        while(Curr)
        {
            next = Curr->next;
            Curr->next = prev;
            prev = Curr;
            Curr = next;
        }
        return prev;
    }
    public:
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        head = reverse(head);
        Node* temp = head;
        int carry = 1;
        while(temp->next != NULL)
        {
            int sum = carry + temp->data;
            temp->data = sum % 10;
            carry = sum/10;
            
            if(carry == 0)
            {
                return reverse(head);
            }
            temp = temp->next;
        }
        temp->data = temp->data + carry;
        return reverse(head);
    }
};
