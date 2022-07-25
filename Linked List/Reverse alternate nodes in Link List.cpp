class Solution
{
    public:
     Node *reverse(Node *head)
    {
        Node *curr = head;
        Node *prev=NULL;
        Node *temp=NULL;
        while(curr!=NULL)
         {
             temp=curr->next;
             curr->next=prev;
             prev=curr;
             curr=temp;
         }
         return prev;
    }
    
    void rearrange(struct Node *odd)
    {
        //add code here
        Node* even  = odd->next ;
        Node* odd_ptr = odd ;
        Node* even_head = even ;
        while(even != NULL && even->next != NULL)
        {
            odd_ptr->next = odd_ptr->next->next;
            even->next = even->next->next;;
            odd_ptr = odd_ptr->next;
            even = even->next;
        }
        even_head = reverse(even_head);
        odd_ptr->next = even_head;
        
    }
};
