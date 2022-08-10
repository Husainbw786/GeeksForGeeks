class Solution {
  public:
  vector<int>v;
  void Solve(Node* root)
  {
      if(root == NULL)
      {
          return;
      }
      Solve(root->left);
      v.push_back(root->data);
      Solve(root->right);
      
  }
  
    vector<int> printNearNodes(Node *root, int low, int high) {
        //code here 
        Solve(root);
        vector<int>ans;
        for(int i=0;i<v.size();i++)
        {
            if(v[i] >= low && v[i] <= high)
            {
                ans.push_back(v[i]);
            }
        }
        return ans;
    }
};
