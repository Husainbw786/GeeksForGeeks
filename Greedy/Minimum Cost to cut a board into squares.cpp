class Solution {
public:
    int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N){
        //Write your code here
        int h = 1,v = 1;
        sort(X.begin(),X.end());
        sort(Y.begin(),Y.end());
        int i = M-2, j = N-2, ans = 0;
        while(i > -1 && j > -1)
        {
            if(X[i] > Y[j])
            {
                ans += X[i]*h;
                v++;
                i--;
            }
            else
            {
                ans += Y[j]*v;
                h++;
                j--;
            }
        }
        if(i == -1)
        {
            while(j > -1)
            {
                ans += Y[j]*v;
                j--;
            }
        }
        if(j == -1)
        {
            while(i > -1)
            {
                ans += X[i]*h;
                i--;
            }
        }
        return ans;
    }
};

