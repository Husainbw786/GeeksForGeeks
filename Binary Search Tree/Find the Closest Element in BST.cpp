class Solution
{
    public:
    //Function to find the least absolute difference between any node
	//value of the BST and the given integer.
	 
	 void inorder(Node* root, int K,int & ans)
	 {
	     if(root == NULL)
	     {
	         return;
	     }
	     ans = min(ans,abs(K - root->data));
	    if(K > root->data)
	    {
	        inorder(root->right,K,ans);
	    }
	    else
	    {
	        inorder(root->left,K,ans);
	    }
	   
	     
	 }
	 
    int minDiff(Node *root, int K)
    {
        //Your code here
       int ans = INT_MAX;
        inorder(root,K,ans);
        return ans;
        
    }
};
