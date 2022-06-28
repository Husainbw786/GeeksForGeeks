class Solution{
public:
    vector<int> longestCommonPrefix(string str1, string str2){
        // code here
        int i =0;
        int j = 0;
        int r = -1;
        vector<int>v;
        while( i < str1.length() && j< str2.length())
        {
            if(str1[i] == str2[j])
            {
                i++;
                j++;
                
            }
            else
            {
                if(i != 0)
                {
                    r = max(r,i);
                    i=0;
                }
                else
                {
                    j++;
                }
            }
        }
        if(r == -1)
        r = i;
        
        if(r==0)
        {
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }
        v.push_back(0);
        v.push_back(r-1);
        return v;
    }
};
