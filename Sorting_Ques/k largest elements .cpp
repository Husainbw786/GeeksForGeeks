class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    sort(arr,arr+n);
	    reverse(arr,arr+n);
	    int i;
	    vector<int>v;
	    for(i=0;i<k;i++)
	    {
	      v.push_back(arr[i]);
	    }
	    return v;
	}

};
