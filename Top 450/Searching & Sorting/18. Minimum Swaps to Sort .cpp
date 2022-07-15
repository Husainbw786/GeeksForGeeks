class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    vector<pair<int,int>>v(nums.size());
	    int i;
	    for(i=0;i<nums.size();i++)
	    {
	        v[i] = {nums[i],i};
	    }
	    sort(v.begin(),v.end());
	    int count = 0;
	    for(i=0;i<nums.size();i++)
	    {
	        if(v[i].second == i)
	        {
	            continue;
	        }
	        else
	        {
	            count++;
	            swap(v[i],v[v[i].second]);
	            i--;
	        }
	    }
	    return count;
	}
};
