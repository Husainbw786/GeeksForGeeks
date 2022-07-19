class Solution{
	public:
	void sortedMerge(int a[], int b[], int res[],int n, int m)
	{
	   // Your code goes here
	      vector<int>v;
          for(int i=0;i<n;i++)
             {
             v.push_back(a[i]);
             }
          for(int j=0;j<m;j++)
            {
             v.push_back(b[j]);
            }
            sort(v.begin(),v.end());
            for(int i = 0;i<v.size();i++)
            {
                res[i] = v[i];
            }
	}
};
