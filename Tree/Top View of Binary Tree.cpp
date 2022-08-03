class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        //Your code here
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        vector<int>v;
        if(root == NULL)
        {
            return v ;
        }
        q.push({root,0});
        while(!q.empty())
        {
            Node* temp = q.front().first;
            int height = q.front().second;
            q.pop();
            if(mp[height] == 0)
            {
                mp[height] = temp->data;
            }
            if(temp->left)
            {
                q.push({temp->left,height-1});
            }
            if(temp->right)
            {
                q.push({temp->right,height+1});
            }
        }
        for(auto x: mp)
        {
            cout << x.second << " ";
        }
    }

};
