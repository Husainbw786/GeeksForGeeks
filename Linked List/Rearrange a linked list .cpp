class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
       // Your Code here
       Node *temp, *odd, *even;
       odd = head;
       even = head->next;
       temp = head->next;
       while(odd->next != NULL && even->next != NULL)
       {
           odd->next = odd->next->next;
           odd = odd->next;
            even->next = even->next->next;
            even = even->next;
       }
       odd->next = temp;
    }
};
