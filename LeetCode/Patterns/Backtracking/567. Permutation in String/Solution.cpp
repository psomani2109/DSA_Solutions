class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> S(26, 0);
        if (s1.size() > s2.size()) return false;
        for(char ch:s1)        
        {
            S[ch-'a']++;
        }

        vector<int> SS(26, 0);
        int k=s1.size();
        for(int i=0; i<k; i++)
        {
            SS[s2[i]-'a']++;
        }
        if(S==SS)
            return true;
        for(int i=1; i+k<=s2.size(); i++)
        {
            SS[s2[i-1]-'a']--;
            SS[s2[i+k-1]-'a']++;
            if(S==SS)
                return true;
        }
        return false;
    }
};