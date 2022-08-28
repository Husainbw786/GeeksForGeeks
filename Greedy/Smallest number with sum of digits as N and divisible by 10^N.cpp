class Solution{
	public:
	string digitsNum(int N)
	{
	    // Code here.
	    string s = "";
	    int i,t,sum = N;
	    while(sum != 0)
	    {
	        if(sum >= 9)
	        {
	            s = s + "9";
	            sum = sum - 9;
	        }
	        
	        else if(sum < 9)
	        {
	            string t = to_string(sum);
	            s = s + t;
	            break;
	        }
	    }
	    reverse(s.begin(),s.end());
	    for(i=0;i<N;i++)
	    {
	        s = s + "0";
	    }
	    return s;
	}
};
