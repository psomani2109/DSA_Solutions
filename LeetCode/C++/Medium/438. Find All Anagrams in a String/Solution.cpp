class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> pat(26, 0), window(26, 0), result;
        for(char ch:p)
        {
            pat[ch-'a']++;
        }
        int k=p.size(),i;
        for(i=0; i<k; i++)
        {
            window[s[i]-'a']++;
        }
        if(window==pat)
            result.push_back(0);

        for(i=1; i+k<=s.size(); i++)
        {
            window[s[i-1]-'a']--;
            window[s[i+k-1]-'a']++;
            if(window==pat)
                result.push_back(i);
        }
        return result;
    }
};