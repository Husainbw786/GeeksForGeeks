
int minFlips (string s)
{
    // your code here
    int i;
    int sum = 0;
    int sum2 = 0;
    
    for(i=0;i<s.length();i++)
    {
        if(s[i] == '0' && i %2 == 0)
        {
            continue;
        }
        if(s[i] == '0' && i % 2 == 1)
        {
            sum++;
        }
        if(s[i] == '1' && i % 2 == 1)
        {
            continue;
        }
            if(s[i] == '1' && i % 2 == 0)
        {
            sum++;
        }
        
    }
    
    
      for(i=0;i<s.length();i++)
    {
        if(s[i] == '0' && i % 2 == 0)
        {
            sum2++;
        }
        if(s[i] == '0' && i % 2 == 1)
        {
            continue;
        }
        if(s[i] == '1' && i % 2 == 0)
        {
            continue;
        }
            if(s[i] == '1' && i % 2 == 1)
        {
            sum2++;
        }
        
    }
    return min(sum,sum2);
}
