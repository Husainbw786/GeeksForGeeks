class Solution{
    public:
    int mergeNsort(int a[], int b[], int n, int m, int answer[])
    {
        // Write your code here
        set<int>s;
        int i;
        for(i=0;i<n;i++)
        {
            s.insert(a[i]);
        }
        
        for(i=0;i<m;i++)
        {
            s.insert(b[i]);
        }
        vector<int>v(s.begin(),s.end());
        i=0;
        for(auto x:v)
        {
            answer[i] = x;
            i++;
        }
        return v.size();
    }
};
