class Solution{   
public:
    int minimumNumberOfSwaps(string s){
        // code here 
        int count = 0;
        int res = 0;
        int i;
        for(i=0;i<s.length();i++)
        {
            if(s[i] == '[')
            {
                count++;
            }
            else
            {
                count--;
                if(count < 0)
                res = res + abs(count);
            }
        }
        return res;
    }
};
