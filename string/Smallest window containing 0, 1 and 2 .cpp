
class Solution {
  public:
    int smallestSubstring(string s) {
        // Code here
        bool zero = false,one = false,two = false;
        int Zcount,Ocount,Tcount;
        int ans = INT_MAX;
        int i;
        for(i=0;i<s.length();i++)
        {  
            if(s[i] == '0')
           {
            zero = true;
            Zcount = i;
           }
           else if(s[i] == '1')
           {
               one = true;
               Ocount = i;
           }
           
           else if(s[i] == '2')
           {
               two = true;
               Tcount = i;
           }
           if(one && two && zero)
           {
             ans = min(ans,max({Ocount,Tcount,Zcount}) - min({Ocount,Tcount,Zcount}));
             
           }
          
            
        }
         if(ans == INT_MAX)
           {
               return -1;
           }
        return ans + 1;
    }
};
