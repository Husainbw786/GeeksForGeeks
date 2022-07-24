class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     unordered_map<int,bool>mp;
     Node* prev = head;
     Node* next = prev->next;
     mp[prev->data] = true;
     
     while(next)
     {
         if(mp[next->data])
         {
             prev->next = next->next;
             next = prev->next;
         }
         else
         {
             mp[next->data] = true;
             prev = prev->next;
             next = next->next;
         }
     }
     return head;
     
    }
};
