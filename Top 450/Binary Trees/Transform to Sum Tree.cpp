class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int Solve(Node* node)
    {
        if(node == NULL)
        {
            return 0;
        }
        int left = Solve(node->left);
        int right = Solve(node->right);
        int Curr = node->data;
        node->data = left+right;
        return left + right + Curr;
        
        
    }
    void toSumTree(Node *node)
    {
        // Your code here
        Solve(node);
        
    }
};
