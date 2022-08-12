class Solution {
  public:
    long long maxi = 0;
  
    //Function to return maximum path product from any node in a tree.
    void Solve(Node* root, long long pro)
    {
        if(root == NULL)
        {
            maxi = max(maxi,pro);
            return;
        }
        pro = pro* root->data;
        Solve(root->left,pro);
        Solve(root->right,pro);
        
    }
    
    long long findMaxScore(Node* root)
    {
        // Your code goes here
      
        long long pro = 1;
        Solve(root, pro);
        return maxi;
    }
};
