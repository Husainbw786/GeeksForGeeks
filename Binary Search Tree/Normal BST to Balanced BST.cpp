 void Inorder(Node* root, vector<int>&v)
 {
     if(root == NULL)
     {
         return;
     }
     Inorder(root->left,v);
     v.push_back(root->data);
     Inorder(root->right,v);
 }
 
 Node* Solve(vector<int>&v,int start,int end)
 {
     if(start > end)
     {
         return NULL;
     }
     int mid = (start + end)/2;
     Node* root = new Node(v[mid]);
     root->left = Solve(v,start,mid-1);
     root->right = Solve(v,mid+1,end);
     
     return root;
 }

Node* buildBalancedTree(Node* root)
{
	// Code here
	vector<int>v;
	Inorder(root,v);
	int start = 0;
	int end = v.size()-1;
    Node* head = Solve(v,start,end);
    return head;
	
}
