
int countTriplets(struct Node* head, int x) 
{ 
    // code here.
    Node* temp = head;
    vector<int>v;
    while(temp)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    int i;
    int count = 0;
    for(i=0;i<v.size()-2;i++)
    {
        int j = i+1;
        int k = v.size()-1;
        while(j<k)
        {
            int sum = v[i] + v[j] + v[k];
            if(sum == x)
            {
                count++;
                j++;
                k--;
                
            }
            else if(sum > x)
            {
                k--;
            }
            else
            {
                j++;
             
            }
        }
    }
    return count;
} 
