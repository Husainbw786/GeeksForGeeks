class Solution{
public:
	vector<int> findSubarray(int a[], int n) {
	    // code here
	    int i = 0;
	    int j  = 0;
	    long long int  sum = 0;
	    vector<int>v;
	    long long int max = 0;
	    int start = 0 ,end = 0;
	    while(j<n && j >= i)
	    {
	        if(a[j] >= 0)
	        {
	            sum = sum + a[j];
	            if(max <= sum) 
	             {
	              max = sum;
	              start = i;
	              end = j;
	             }
	           j++;
	        }
	        else 
	        {
	            i = j+1;
	            j++;
	            sum = 0;
	        }
	    }
	    for(i=start;i<=end;i++)
	    {
	        v.push_back(a[i]);
	    }
	    if(v.size() == 1 && v[0] < 0)
	    {
	        v.clear();
	        v.push_back(-1);
	    }
	    return v;
	}
};
