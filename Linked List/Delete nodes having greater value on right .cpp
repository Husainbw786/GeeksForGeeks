class Solution
{
    public:
    Node *compute(Node *head)
    {
        // your code goes here
        Node* Curr = head;
        Node* temp = Curr;
        
        while(Curr->next != NULL)
        {
            if(Curr->data < Curr->next->data)
            {
                temp = Curr;
                temp->data = temp->next->data;
                temp->next = temp->next->next;
                Curr = head;
            }
            else
            {
                Curr = Curr->next;
            }
        }
        return head;
    }
