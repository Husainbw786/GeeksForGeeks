
class Solution{
  public:
    int findIndex(string str) {
        // Your code goes here  
        int open = 0;
        int close = count(str.begin(),str.end(),')');
        int i;
        for(i=0;i<str.length();i++)
        {
            if(str[i] ==')')
            {
                close--;
            }
            else
            {
                open++;
            }
            if(open == close)
            {
                return i+1;
            }
        }
        return 0;
    }
};
