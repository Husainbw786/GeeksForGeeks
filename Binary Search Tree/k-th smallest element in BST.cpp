class Solution {
  public:
    // Return the Kth smallest element in the given BST
    int ans;
    void inorder(Node* root,int K, int & index)
    {
        if(root == NULL)
        {
            return;
        }
        inorder(root->left,K,index);
        if(K == index)
        {
            ans = root->data;
            index++;
            return;
        }
        else
        {
            index++;
        }
        inorder(root->right,K,index);
    }
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        int index = 1;
        ans = -1;
        inorder(root,K,index);
        return ans;
    }
};
