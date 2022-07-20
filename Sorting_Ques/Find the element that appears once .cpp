class Solution{
public:	
	int search(int A[], int N){
	    //code
	    int i;
	    unordered_map<int,int>mp;
	    for(i=0;i<N;i++)
	    {
	        mp[A[i]]++;
	    }
	    for(auto x :mp)
	    {
	        if(x.second == 1)
	        {
	            return x.first; 
	        }
	    }
	    
	}
};
