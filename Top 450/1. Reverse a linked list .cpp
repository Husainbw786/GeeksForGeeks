class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* Curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(Curr)
        {
            next = Curr->next;
            Curr->next = prev;
            prev = Curr;
            Curr = next;
        }
        return prev;
    }
    
};
