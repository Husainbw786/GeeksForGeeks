class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int>v;
        if(root == NULL)
        {
            return v;
        }
        map<int,int>mp;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty())
        {
            Node* temp = q.front().first;
            int height = q.front().second;
            q.pop();
            mp[height] = temp->data;
            if(temp->left)
            {
                q.push({temp->left,height-1});
            }
            if(temp->right)
            {
                q.push({temp->right,height+1});
            }
        }
        for(auto x : mp)
        {
            cout << x.second << " ";
        }
    }
};
