class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int ans = 0;
    int Solve(Node* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        int left = Solve(root->left);
        int right = Solve(root->right);
        ans = max(ans,left+right+1);
        return max(left,right) + 1;
    }
    int diameter(Node* root) {
        // Your code here
       Solve(root);
       return ans;
    }
};
