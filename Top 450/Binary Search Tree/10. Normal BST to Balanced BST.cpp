void Solve(Node* root, vector<int>&v)
 {
     if(root == NULL)
     {
         return;
     }
     Solve(root->left,v);
     v.push_back(root->data);
     Solve(root->right,v);
     
 }
 Node* Balance(vector<int>&v,int start,int end)
 {
     if(start > end)
     {
         return NULL;
     }
     int mid = (start + end) / 2;
     Node* root = new Node(v[mid]);
      root->left = Balance(v,start,mid-1);
      root->right = Balance(v,mid+1,end);
     
 }

Node* buildBalancedTree(Node* root)
{
	// Code here
	vector<int>v;
	Solve(root,v);
	sort(v.begin(),v.end());
	int start = 0;
	int end = v.size()-1;
	Node* head = Balance(v,0,v.size()-1);
	return head;
	
	
}
