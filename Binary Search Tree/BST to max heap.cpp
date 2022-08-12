class Solution{
  public:
  
  void inorder(Node* root, vector<int>&v)
  {
      if(root == NULL)
      {
          return;
      }
      inorder(root->left,v);
      v.push_back(root->data);
      inorder(root->right,v);
      
  }
  
  void Solve(Node* root,vector<int>&v,int & index)
  {
      if(root == NULL)
      {
          return;
      }
      Solve(root->left,v,index);
      Solve(root->right,v,index);
      root->data = v[index++];
      
  }
  
    void convertToMaxHeapUtil(Node* root)
    {
        // Your code goes here
        vector<int>v;
        inorder(root,v);
        int index = 0;
        Solve(root,v,index);
    }    
};
