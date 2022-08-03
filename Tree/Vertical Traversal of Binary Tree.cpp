class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        //Your code here
        queue<pair<Node*,int>>q;
        vector<int>ans;
        map<int,vector<int>>mp;
        q.push({root,0});
        while(!q.empty())
        {
            Node* temp = q.front().first;
            int height = q.front().second;
            q.pop();
            mp[height].push_back(temp->data);
            if(temp->left)
            {
                q.push({temp->left,height-1});
            }
            
            if(temp->right)
            {
                q.push({temp->right,height+1});
            }
        }
        for(auto x:mp)
        {
            for(auto i:x.second)
            ans.push_back(i);
        }
        return ans;
    }
};
