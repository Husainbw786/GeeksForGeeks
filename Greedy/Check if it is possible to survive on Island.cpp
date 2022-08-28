class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        int sunday = S/7;
        int canBuy = S - sunday;
        int overall = S*M;
        int count = overall / N;
        
        if(overall % N != 0)
        {
            count = (overall / N) + 1;
        }
        if(count<= canBuy)
        {
            return count;
        }
        else 
        {
            return -1;
        }
    }
};
