class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) {
        // Code here
        queue<string>q;
        q.push(startWord);
        int wordsize = startWord.size();
        
        unordered_set<string>word;
        int i;
        for(i=0;i<wordList.size();i++)
        {
            word.insert(wordList[i]);
        }
        if(word.find(targetWord) == word.end())
        {
            return 0;
        }
        int len = 0;
        while(!q.empty())
        {
            len++;
            int qlen = q.size();
            for(i=0;i<qlen;i++)
            {
                string s = q.front();
                q.pop();
                for(int j=0;j<wordsize;j++)
                {
                    char org = s[j];
                    for(char ch = 'a'; ch <= 'z'; ch++)
                    {
                        s[j] = ch;
                        if(s == targetWord)
                        {
                            return len+1;
                        }
                        if(word.find(s)== word.end())
                        {
                            continue;
                        }
                        word.erase(s);
                        q.push(s);
                    }
                    s[j] = org;
                }
            }    
        }
        return 0;
    }
};
