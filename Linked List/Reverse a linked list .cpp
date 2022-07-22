
class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* Curr = head;
        Node* next = NULL;
        Node* prev = NULL;
        while(Curr != NULL)
        {
            next = Curr->next;
            Curr->next = prev;
            prev = Curr;
            Curr = next;
        }
        return prev;
    }
    
};
