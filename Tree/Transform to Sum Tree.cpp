class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int solve(Node* node)
    {
        if(node == NULL)
        {
            return 0;
        }
        int left = solve(node->left);
        int right = solve(node->right);
        int Curr = node->data;
        node->data = left+right;
        return left + right + Curr;
    }
    
    void toSumTree(Node *node)
    {
        // Your code here
        solve(node);
    }
};
