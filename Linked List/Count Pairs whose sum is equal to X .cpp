class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        Node* temp1 = head1;
        Node* temp2 = head2;
        unordered_set<int>s;
        int count = 0; 
        while(temp1)
        {
           s.insert(temp1->data);
           temp1 = temp1->next;
        }
        while(temp2)
        {
            if(s.find(x - (temp2->data)) != s.end())
            {
                count++;
            }
            temp2 = temp2->next;
        }
        return count;
        
    }
};
