class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        //Your code here
        map<int,int>mp;
        vector<int>nums;
        int i;
        for(i=0;i<N;i++)
        {
            mp[A1[i]]++;
        }
        for(i=0;i<M;i++)
        {
            int val;
            if(mp.find(A2[i]) != mp.end())
            {
                val = mp[A2[i]];
            }
            else
            {
                continue;
            }
            while(val--)
            {
                nums.push_back(A2[i]);
            }
            mp[A2[i]] = 0;
        }
            
            for(auto x:mp)
            {
                int count = x.second;
                while(count--)
                {
                    nums.push_back(x.first);
                }
            }
        
        return nums;
    } 
};
