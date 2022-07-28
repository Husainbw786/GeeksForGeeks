class Solution{
  public:
    //Function to merge K sorted linked list.
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
           vector<int>v;
          
           int i;
           for(i=0;i<K;i++)
           {
               Node* temp = arr[i];
               while(temp != NULL)
               {
                   v.push_back(temp->data);
                   temp = temp->next;
               }
           }
           sort(v.begin(),v.end());
           Node* head = new Node(v[0]);
           Node* ans = head;
           for(i=0;i<v.size();i++)
           {
               head->next = new Node(v[i]);
               head = head->next;
               
           }
           head->next = NULL;
           return ans->next;
           
    }
};

