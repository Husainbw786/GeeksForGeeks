class Solution
{
    public:
    Node* reverseBetween(Node* head, int m, int n)
    {
        //code here
        if(head == NULL)
        {
            return NULL;
        }
        Node* dummy = new Node(0);
        Node* prev = dummy;
        dummy->next = head;
        int i;
        for(i=0;i<m-1;i++)
        {
            prev = prev->next;
        }
        Node* start = prev->next;
        Node* next = start->next;
        
        for(i=0;i<n-m;i++)
        {
            start->next = next->next;
            next->next = prev->next;
            prev->next = next;
            next = start->next;
        }
        return dummy->next;
    }
};
