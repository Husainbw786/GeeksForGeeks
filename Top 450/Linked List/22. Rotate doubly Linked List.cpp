class Solution {
public:
    Node *rotateDLL(Node *start,int p)
    {
        //Add your code here
        Node* Curr = start;
        while(Curr->next)
        {
            Curr = Curr->next; 
        }
        while(p>0)
        {
            Curr->next = start;
            start->prev = Curr;
            Curr = Curr->next;
            start = start->next;
            Cout << start->data
            Curr->next = 0;
            start->prev = 0;
            p--;
        }
        return start;
    }
};
