class Solution{
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code here
        Node* temp = head;
        int count = 0;
        while(temp)
        {
            count++;
            temp = temp->next;
        }
        int k = count/2;
        int i ;
        int ans;
        temp = head;
        for(i=0;i<k;i++)
        {
         temp = temp->next;   
        }
        ans = temp->data;
        return ans;
    }
};
