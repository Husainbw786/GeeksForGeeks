
class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int x)
    {
        // code here
        Node* start = head;
        Node* end= head;
        vector<pair<int,int>>result;
        while(end->next != NULL)
        {
            end = end->next;
        }
        while(start != end  && start->prev != end)
        {
            if((start->data + end->data) == x)
            {
                result.push_back({start->data,end->data});
                start = start->next;
                end = end->prev;
            }
            else if( (start->data + end->data) > x )
            {
                end = end->prev;
            }
            else
            {
                start = start->next;
            }
            
        }
        return result;
    }
};
