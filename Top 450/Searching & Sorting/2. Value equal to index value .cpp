class Solution{
public:

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    int i;
	    vector<int>ans;
	    for(i=0;i<n;i++)
	    {
	        if(arr[i] == i+1)
	        {
	             ans.push_back(arr[i]);
	            
	        }
	    }
	    return ans;
	}
};
