class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	queue<Node*>q;
    	vector<int>ans;
    	q.push(root);
    	int flag = 0;
    	while(! q.empty())
    	{
    	    Node* temp1;
    	    vector<int>v;
    	    int size = q.size();
    	    while(size)
    	    {
    	      temp1 = q.front();
    	      v.push_back(temp1->data);
    	      q.pop();
    	      if(temp1->left)
    	        {
    	            q.push(temp1->left);
    	        }
    	        if(temp1->right)
    	        {
    	            q.push(temp1->right);
    	        }
    	      size--;
    	      
    	    }
    	    if(flag % 2 != 0)
    	    {
    	        reverse(v.begin(),v.end());
    	    }
    	    for(int i=0;i<v.size();i++)
    	      {
    	        ans.push_back(v[i]);
    	      }
    	        flag++;
    	}
    	    
    	 return ans;   
    }
};
