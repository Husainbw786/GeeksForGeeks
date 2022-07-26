class Solution
{
    public:
    Node* removeAllDuplicates(struct Node* head)
    {
        //code here
        unordered_map<int,int>mp;
        Node* temp = head;
        while(temp)
        {
            mp[temp->data]++;
            temp = temp->next;
            
        }
        Node* list = new Node(0);
        Node* temp1 = head;
        Node* result = list;
        while(temp1 != NULL)
        {
            if(mp[temp1->data]==1)
            {
                Node* ans = new Node(temp1->data);
                list->next = ans;
                mp[temp1->data] = 0;
                list = list->next;
            }
            temp1 = temp1->next;
        }
        list->next = NULL;
        return result->next;
    }
};
