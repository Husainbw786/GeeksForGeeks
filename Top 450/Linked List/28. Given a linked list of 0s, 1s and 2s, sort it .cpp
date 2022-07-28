class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        int zero_count = 0;
        int one_count = 0;
        int two_count = 0;
        Node* temp = head;
        while(temp)
        {
            if(temp->data == 0)
            {
                zero_count++;
            }
            if(temp->data == 1)
            {
            one_count++;    
            }
            if(temp->data == 2)
            {
                two_count++;
            }
            temp = temp->next;
        }
        temp = head;
        while(temp)
        {
            if(zero_count != 0)
            {
                temp->data = 0;
                zero_count--;
            }
            else
            {
                
               if(one_count != 0)
               {
                  temp->data = 1;
                  one_count--;
               }
               else
               {
                  temp->data = 2;
                  two_count--;
               }
            }
            temp = temp->next;
        }
        return head;
  
               
    }
};
