
class Solution{
  public:
    // root : the root Node of the given BST
    // target : the target sum
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
    
    int isPairPresent(struct Node *root, int target)
    {
    //add code here.
    vector<int>v;
    Solve(root,v);
    int i = 0;
    int j = v.size()-1;
    while(i<j)
    {
       int sum = v[i] + v[j];
        if(sum == target)
        {
            return 1;
        }
        else if(sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return 0;
    
    }
};
