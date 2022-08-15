class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    // code here
	    priority_queue<int>pq;
	    int i;
	    vector<int>v;
	    for(i=0;i<n;i++)
	    {
	        pq.push(arr[i]);
	       
	    }
	    while(k--)
	    {
	        v.push_back(pq.top());
	        pq.pop();
	    }
	    return v;
	}

};
