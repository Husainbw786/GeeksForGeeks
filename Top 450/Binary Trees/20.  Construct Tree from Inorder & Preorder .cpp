class Solution{
    public:
    int index = 0;
    unordered_map<int,int>mp;
    Node* Solve(int pre[],int in[],int left, int right)
    {
        if(left > right)
        {
            return NULL;
        }
        Node* res = new Node(pre[index++]);
        if(left == right)
        {
            return res;
        }
        int mid = mp[res->data];
        res->left = Solve(pre,in,left,mid-1);
        res->right= Solve(pre,in,mid+1,right);
        return res;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        index = 0;
        mp.clear();
        for(int i=0;i<n;i++)
        {
            mp[in[i]] = i;
        }
        Node* root = Solve(pre,in,0,n-1);
        return root;
        
    }
};
