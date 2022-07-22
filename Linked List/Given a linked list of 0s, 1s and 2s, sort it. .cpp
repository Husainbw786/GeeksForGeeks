class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int count[3] = {0};
        Node* temp = head;
        while(temp)
        {
            count[temp->data]++;
            temp = temp->next;
        }
        temp = head;
        int i;
        for(i=0;i<3;i++)
        {
            while(count[i]--)
            {
                temp->data = i;
                temp = temp->next;
            }
        }
        return head;
        
    }
};
