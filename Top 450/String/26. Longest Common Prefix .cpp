class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n = strs.size();
        string s1 = strs[0];
        string s2 = strs[n-1];
        string s3 = "";
        int i = 0;
       
        for(i=0;i<s1.length();i++)
        {
            if(s1[i] == s2[i])
            {
                s3 = s3 + s1[i];
            }
            else
            {
                break;
            }
        }
        return s3;
        
    }
};
