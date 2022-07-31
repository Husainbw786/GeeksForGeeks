class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int ans = 0;
    int height(Node* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        int left_h = height(root->left);
        int right_h = height(root->right);
        
        ans = max(ans,left_h+right_h+1);
        
        return max(left_h,right_h)+1;
    }
    
    
    int diameter(Node* root) {
        // Your code here
        
        height(root);
        return ans;
    }
};
