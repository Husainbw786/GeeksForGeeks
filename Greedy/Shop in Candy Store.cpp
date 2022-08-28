class Solution
{
public:
    vector<int> candyStore(int candies[], int n, int k)
    {
        // Write Your Code here
        sort(candies,candies+n);
        int c1 = 0;
        int i=0;
        int j = n-1;
        while(i <= j)
        {
            c1 = c1 + candies[i];
            i++;
            j = j-k;
        }
        int c2 = 0;
        i = 0;
        j = n-1;
        while(i<=j)
        {
            c2 = c2 + candies[j];
            j--;
            i = i+k;
        }
        return {c1,c2};
    }
};
