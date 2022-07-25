
class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node* temp = head;
        Node* p = head;
        int count = 0;
        while(count<k)
        {
            temp = temp->next;
            count++;
        }
        if(temp == NULL)
        {
            return head;
        }
        head = temp;
        while(temp->next!= NULL)
        {
            temp = temp->next;
        }
        temp->next = p;
        while(p->next != head)
        {
            p = p->next;
        }
        p->next = NULL;
        return head;
    }
};
   
