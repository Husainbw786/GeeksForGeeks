class Solution{
    public:
    int longestUniqueSubsttr(string S){
        //code
        int i = 0;
        int j = 0;
        int n = S.size();
        int arr[26] = {0};
        int maxi = INT_MIN;
        while(j<n)
        {
            arr[S[j]-'a']++;
           while(i<n && arr[S[j] - 'a'] != 1)
           {
               arr[S[i]-'a']--;
               i++;
           }
           maxi = max(maxi,j-i+1);
           j++; 
        }
        return maxi;
    }
};
