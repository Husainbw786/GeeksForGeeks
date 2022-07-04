class Solution{
public:	

	vector<int> barcketNumbers(string S)
	{
	    // Your code goes here
	    stack<int>st;
	    int count = 0;
	    vector<int>v;
	    int i;
	    for(i=0;i<S.size();i++)
	    {
	        if(S[i] == '(')
	        {
	            count++;
	            st.push(count);
	            v.push_back(st.top());
	        }
	        else if(S[i] ==')')
	        {
	            v.push_back(st.top());
	            st.pop();
	        }
	    }
	    return v;
	}
};
