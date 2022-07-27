class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;
        ListNode* temp = head;
        while(temp)
        {
            count++;
            temp = temp->next;
        }
      
        count = count/2 ;
        temp = head;
        while(count)
        {
            temp = temp->next;
            count--;
        }
        return temp;
        
        
    }
};
