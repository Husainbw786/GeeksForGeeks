class Solution {
  public:
  
  void postorder(Node*root,int & count)
  {
      if(root == NULL)
      {
          return;
      }
      postorder(root->left,count);
        if(root->left != NULL && root->right != NULL)
      {
          count++;
      }
 if((root->left == NULL && root->right != NULL) || (root->left != NULL && root->right == NULL))
      {
          count++;
      }
      
      postorder(root->right,count);
    
  }
  
    int countNonLeafNodes(Node* root) {
        // Code here
        int count = 0;
        postorder(root,count);
        return count;
    }
};
