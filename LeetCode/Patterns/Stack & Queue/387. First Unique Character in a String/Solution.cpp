class Solution {
public:
    int firstUniqChar(string s) {
        vector <int> present(26, 0);
        for(char ch:s)
        {
            present[ch-'a']++;
        }
        for(int i=0; i<s.size(); i++)
        {
            if(present[s[i]-'a']==1)
                return i;
        }
        return -1;
    }
};