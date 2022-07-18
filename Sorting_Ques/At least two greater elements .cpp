class Solution{
public:
    vector<int> findElements(int a[], int n)
    {
        // Your code goes here 
        int i;
      sort(a,a+n);
        
        vector<int>v;
        for(i=0;i<n-2;i++)
        {
            v.push_back(a[i]);
        }
        return v;
    }
};
