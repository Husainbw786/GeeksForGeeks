int Solve(Node* root, int X, int &count)
 {
     if(root == NULL)
     {
         return NULL;
     }
     int left = Solve(root->left,X,count);
     int right = Solve(root->right,X,count);
     if(left + right + root->data == X)
     {
         count++;
     }
     return left+right+root->data;
 }
int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
	int count = 0;
	Solve(root,X,count);
	return count;
}
