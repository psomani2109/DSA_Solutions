class Solution {
  public:
    int atMost(string& s, int y)
    {
        vector<int> freq(26,0);
        int l=0, count=0, distinct=0;
        for(int r=0; r<s.size(); r++)
        {
            if(freq[s[r]-'a']==0)
                distinct++;
            freq[s[r]-'a']++;
            while(distinct>y)
            {
                freq[s[l]-'a']--;
                if(freq[s[l]-'a']==0)
                    distinct--;
                l++;
            }
            
            count+=r-l+1;
        }
        return count;
    }
    
    int countSubstr(string& s, int k) {
        // code here
        return atMost(s, k)-atMost(s, k-1);
    }
};