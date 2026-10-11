class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        vector<int> freq(26, 0);
        int count=0, l=0, r=0, len=0;
        
        for(r=0; r<s.size(); r++)
        {
            if(freq[s[r]-'a']==0)       //unique found
            {
                count++;
                freq[s[r]-'a']++;
            }
            else                       //existing found
                freq[s[r]-'a']++;
            if(count>k)
                len=max(len, r-l);
                
            while(count>k)              //more uniques than k
            {
                freq[s[l]-'a']--;
                if(freq[s[l]-'a']==0)
                    count--;
                l++;
            }
            
        }
        if (count<k)
            return -1;
        len=max(len, r-l);
        return len;
    }
};