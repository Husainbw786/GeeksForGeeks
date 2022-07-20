class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        int i;
        vector<int>v;
        for(i=0;i<n;i++)
        {
            if(arr[i] == x)
            {
                v.push_back(i);
            }
        }
        if(v.size() == 0)
        {
            v.push_back(-1);;
        }
        else
        {
            v =  {v[0],v[v.size()-1]};
        }
        return v;
    }
};
