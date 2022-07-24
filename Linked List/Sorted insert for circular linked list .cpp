class Solution
{
    public:
    Node *sortedInsert(Node* head, int data)
    {
       //Your code here
         Node* newNode = new Node(data);
         Node* Curr = head;
         while(Curr->next != head && Curr->data < newNode->data)
         {
             Curr = Curr->next;
         }
         newNode->next = Curr->next;
         Curr->next = newNode;
         if(newNode->data < Curr->data)
         {
             int temp = Curr->data;
             Curr->data = newNode->data;
             newNode->data = temp;
         }
         return head;
    }
};
