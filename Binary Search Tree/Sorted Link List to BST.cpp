class Solution{
  public:
    TNode* sortedListToBST(LNode *head) {
        //code here
        if(head == NULL)
        {
            return NULL;
        }
        if(head->next == NULL)
        {
            TNode* root = new TNode(head->data);
            return root;
        }
        LNode* fast = head, *slow =head, *temp;
        while(fast && fast->next)
        {
            temp = slow;
            fast = fast->next->next;
            slow = slow->next;
        }
        TNode* root = new TNode(slow->data);
        temp->next = NULL;
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(slow->next);
        return root;
        
        
    }
};
