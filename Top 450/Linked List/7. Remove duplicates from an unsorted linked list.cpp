class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_map<int,int>mp;
     int i;
     Node* temp = head;
     Node* prev = NULL;
     
     while(temp)
     {
         if(mp.find(temp->data) != mp.end())
         {
             prev->next = temp->next;
             free(temp);
             temp = prev->next;
         }
         else
         {
             mp[temp->data]++;
             prev = temp;
             temp = temp->next;
         }
     }
     return head;
     
    }
};
