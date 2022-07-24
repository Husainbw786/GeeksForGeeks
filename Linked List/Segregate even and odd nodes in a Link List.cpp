class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
          if(head->next == NULL)
         {
            return head;
        }
        Node* newNode = new Node(-1);
        Node* newNode2 = new Node(-1);
        Node* even = newNode;
        Node* odd = newNode2;
         
        
        while(head != NULL)
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
        even->next = newNode2->next;
        return newNode->next;
    }
};
