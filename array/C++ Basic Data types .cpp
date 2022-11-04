class Solution {
  public:
    int BasicDataType(string s) 
    {
        int size=s.length();
        
        if(size==1)
        
        {
            if(s[0]>='0'&&s[0]<='9')
            return sizeof(int);
            else
            return sizeof(char);
        }
        
        for(int i=0;i<size;i++)
        {
            if(s[i]=='.')
            {
                if((size-1-i)>=6)
                {
                    return sizeof(double);
                    
                }
                else
                return sizeof(float);
            }
            
        }
        return sizeof(int);
    }
};
