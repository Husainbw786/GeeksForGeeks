class Solution{
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node* slow = head;
        Node* fast = head;
        while(fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* prev = NULL;
        Node* next;
        Node* Curr = slow;
        while(Curr)
        {
            next = Curr->next;
            Curr->next = prev;
            prev = Curr;
            Curr = next;
        }
        fast = head;
        while(prev != NULL)
        {
            if(fast->data != prev->data)
            {
                return 0;
            }
            fast = fast->next;
            prev = prev->next;
        }
        return 1;
        
    }
};
