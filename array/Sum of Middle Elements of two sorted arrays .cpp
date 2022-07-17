
class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
            // code here 
            vector<int>v;
            int i;
            int ans = 0;
            for(i=0;i<n;i++)
            {
                v.push_back(ar1[i]);
            }
            
            for(i=0;i<n;i++)
            {
                v.push_back(ar2[i]);
            }
            sort(v.begin(),v.end());
            for(i=0;i<v.size();i++)
            {
                if(i == v.size()/2)
                {
                    ans += v[i] + v[i-1];
                    
                }
            }
            return ans;
    }
};
