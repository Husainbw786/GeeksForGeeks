 void solve(Node* root,vector<vector<int>>&ans,vector<int>v)
 {
     if(root == NULL)
     {
         return;
     }
     v.push_back(root->data);
     if(root->left == NULL && root->right == NULL)
     {
         ans.push_back(v);
         v.empty();
         return;
     }
     solve(root->left,ans,v);
     solve(root->right,ans,v);
 }
vector<vector<int>> Paths(Node* root)
{
    // Code here
    vector<vector<int>>ans;
    if(root == NULL)
    {
        return ans;
    }
    vector<int>v;
    solve(root,ans,v);
    return ans;
}
