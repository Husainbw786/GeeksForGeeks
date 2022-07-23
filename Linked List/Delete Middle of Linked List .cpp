Node* deleteMid(Node* head)
{
    // Your Code Here
    Node* slow = head;
    Node* fast = head;
    Node* pre = NULL;
    while(fast != NULL && fast->next != NULL)
    {
        pre = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    pre->next = slow->next;
  //  slow->next = NULL;
    return head;
}
