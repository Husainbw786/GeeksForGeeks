class Solution
{
    vector<vector<int>>ans;
    void Solve(Node* root,vector<int>v,int currsum ,int sum)
    {
        if(root == NULL)
        {
            return;
        }
        currsum += root->key;
        v.push_back(root->key);
        if(currsum == sum)
        {
            ans.push_back(v);
        }
        Solve(root->left,v,currsum,sum);
        Solve(root->right,v,currsum,sum);
    }
    
    public:
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        //code here
        vector<int>v;
        Solve(root,v,0,sum);
        return ans;
    }
};
