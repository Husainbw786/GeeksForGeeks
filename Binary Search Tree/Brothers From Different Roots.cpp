
class Solution
{
public:
    
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
    int countPairs(Node* root1, Node* root2, int x)
    {
       vector<int>v1;
       vector<int>v2;
       Solve(root1,v1);
       Solve(root2,v2);
       int count =0;
       unordered_set<int>st;
       int i;
       for(i=0;i<v1.size();i++)
       {
           st.insert(v1[i]);
       }
       for(i=0;i<v2.size();i++)
       {
           if(st.find(x-v2[i]) != st.end())
           {
               count++;
           }
       }
       return count;
    }
};
