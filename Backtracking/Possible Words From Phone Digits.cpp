class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
vector<string>keys ={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};    
    void Solve(vector<string>w, int n, int i, string word, vector<string>&output,int a[])
    {
        if(i == n)
        {
            output.push_back(word);
            return;
        }
        for(int j=0;j<keys[a[i]].size();j++)
        {
            word.push_back(keys[a[i]][j]);
            Solve(w,n,i+1,word,output,a);
            word.pop_back();
        }
    }
    
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here  

  vector<string>w;
    int i;
   
    vector<string>output;
    Solve(w,N,0,"",output,a);
    return output;
    }
};
