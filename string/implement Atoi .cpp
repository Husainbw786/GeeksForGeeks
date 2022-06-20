class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        int sign = 0,n = s.length();
        int i;
        long long out;
        for(i=0;i<n;i++)
        {
            if(s[i] == 45 && i == 0 )
            {
                // 45 is ascii value of (-)
                sign = 1;
                continue;
            }
            if(s[i] >= '0' && s[i] <= '9')
            {
                if(i==0)
                {
                    out = s[i] - 48;
                }
                else
                {
                    out = out*10 ;
                    out = out + (s[i] - 48);
                }
            }
            else
            {
                return -1;
            }
        }
        if(sign == 1)
        {
            out = 0 - out;
        }
        return out;
    }
};
