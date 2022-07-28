class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        if(head == NULL)
        {
            return NULL;
        }
        Node* odd = new Node(0);
        Node* odd_ans = odd;
        Node* even = new Node(0);
        Node* even_ans = even;
        while(head)
        {
            if(head->data % 2 == 0)
            {
                even->next = head;
                even = even->next;
            }
            else
            {
                odd->next = head;
                odd = odd->next;
            }
            head = head->next;
        }
        odd->next = NULL;
        even->next = odd_ans->next;
        return even_ans->next;
    }
};
