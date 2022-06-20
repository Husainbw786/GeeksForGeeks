class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> arr, int n){
        int intialValue;
        vector<vector<int>> result;
        for(int i = 1; i < n; i++){
            if(arr[i-1] >= arr[i]){
                continue;
            }
            intialValue = i-1;
            while(i < n-1 && arr[i] < arr[i+1]){
                i++;
            }
            vector<int>v(2);
            v[0] = intialValue;
            v[1] = i;
            result.push_back(v);
            i++;
        }
        return result;
    }
