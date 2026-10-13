class Solution {
public:
    int longestSubstring(string s, int k) {
        vector <int> freq(26, 0);
        for(char ch:s)
        {
            freq[ch-'a']++;
        }
        int l=0, r=0,len=0;
        for(r=0; r<s.size(); r++)
        {
            if(freq[s[r]-'a']<k)
                l++;
            len=max(len, r-l+1);
        }
        return len;
    }
};