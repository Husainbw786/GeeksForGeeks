class Solution
{
    public:
    Node* insertionSort(struct Node* head)
    {
        //code here
        Node* dummy = new Node(10000);
        while(head)
        {
            Node* next = head->next;
            Node* temp = dummy;
            while(temp->next && temp->next->data < head->data)
            {
                temp = temp->next;
            }
            head->next = temp->next;
            temp->next = head;
            head = next;
        }
        return dummy->next;
    }
    
};
