class Solution
{
  public:
    void sortIt(long long arr[], long long n)
    {
        //code here.
        vector<int>v;
        vector<int>v1;;
        
        int i;
        
        for(i=0;i<n;i++)
        {
            if(arr[i] % 2 != 0)
            {
                v.push_back(arr[i]);
            }
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        for(i=0;i<n;i++)
        {
            if(arr[i] % 2 == 0)
            {
                v1.push_back(arr[i]);
            }
        }
        sort(v1.begin(),v1.end());
        
        
        for(i=0;i<v1.size();i++)
        {
            v.push_back(v1[i]);
        }
        for(i=0;i<v.size();i++)
        {
            arr[i] = v[i];
            
        }
        
    }
};
