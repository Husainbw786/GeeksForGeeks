class Solution{
    public:
    // Function to check whether the array contains
    // a set of contiguous integers
    bool areElementsContiguous(int arr[], int n)
    {
	// Complete the function
   set<int>st;
	   vector<int>v;
	   for(int i=0;i<n;i++){
	       st.insert(arr[i]);
	   }
	   for(auto x:st){
	      v.push_back(x);
	   }
	   for(int i=0;i<v.size()-1;i++){
	       if((v[i+1]-v[i])!=1){
	           return 0;
	       }
	   }
	  return 1;
  }
};
