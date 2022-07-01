class Solution{
public:	
	bool sentencePalindrome(string s) 
	{
	    
	    int low = 0;
	    int high = s.length()-1;
	    while(low <= high)
	    {
	        while(s[low] == ' ' || s[low] == '.' || s[low] == ';')
	        {
	            low++;
	        }
	        while(s[high] == ' ' || s[high] == '.' || s[high] == ';')
	        {
	            high--;
	        }
	        if(s[low] == s[high])
	        {
	            low++;
	            high--;
	        }
	        else
	        {
	            return false;
	        }
	    }
	    return true;
	}
};
