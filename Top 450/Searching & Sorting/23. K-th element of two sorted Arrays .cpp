class Solution{
    public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        vector<int>v;
        int i;
        int ans;
        for(i=0;i<n;i++)
        {
            v.push_back(arr1[i]);
        }
        
        for(i=0;i<m;i++)
        {
            v.push_back(arr2[i]);
        }
        sort(v.begin(),v.end());
        
        for(i=0;i<v.size();i++)
        {
            if(i==k)
            {
                 ans = v[i-1];
            }
        }
        return ans;
    }
};
