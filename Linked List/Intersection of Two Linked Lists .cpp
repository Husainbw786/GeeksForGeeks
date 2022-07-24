class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code here
        // return the head of intersection list
        unordered_set<int>st;
        Node* temp1 = head1;
        Node* temp2 = head2;
        
        while(temp2)
        {
            st.insert(temp2->data);
            temp2 = temp2->next;
        }
        Node* ans = new Node(-1);
        Node* result = ans;
        while(temp1)
        {
            if(st.find(temp1->data) != st.end())
            {
                ans->next = temp1;
                ans = ans->next;
            }
            temp1 = temp1->next;
        }
        ans->next = NULL;
        return result->next;
    }
};
