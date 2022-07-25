class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node* Curr = head;
        node* prev = NULL;
        node* next = NULL;
        int count = 0;
        while(Curr != NULL && count<k)
        {
            next = Curr->next;
            Curr->next = prev;
            prev = Curr;
            Curr = next;
            count++;
            
        }
        if(next != NULL)
        {
            head->next = reverse(next,k);
        }
        return prev;
        
    }
};
