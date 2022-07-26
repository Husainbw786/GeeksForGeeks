class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
         ListNode* slow = head;
         ListNode* fast = head;
        while(slow != NULL && fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow)
            {
                break;
            } 
            
        }
       if(fast==NULL || fast->next==NULL)
           return NULL;
        if(slow == head)
        {
            while(fast->next != slow)
            {
                fast = fast->next;
            }
            return fast->next;
        }
        
        slow = head;
        while(slow->next != fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        
        return fast->next;
    }
};
