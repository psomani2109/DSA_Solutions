class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0, len=0, max_freq=0, new_freq=0;
        vector<int> freq(26, 0);
        for(int r=0; r<s.size(); r++)
        {
            freq[s[r]-'A']++;
            max_freq=max(max_freq, freq[s[r]-'A']);
            
            while(r-l+1 - max_freq > k)
            {
                freq[s[l]-'A']--;
                for(int j=0; j<26; j++)
                {
                    new_freq=max(new_freq, freq[j]);
                }
                max_freq=new_freq;
                l++;
            }
            len=max(len, r-l+1);
        }
        return len;
    }
};