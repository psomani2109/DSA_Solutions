class Solution {
  public:
    bool areIsomorphic(string &s1, string &s2) {
        // code here
        unordered_map <char, char> s1_map;
        unordered_map <char, char> s2_map;
        for(int i=0; i<s1.size(); i++)
        {
            if(!s1_map[s1[i]])
                s1_map[s1[i]]=s2[i];
            else if(s1_map[s1[i]]!=s2[i])
                return false;
            if(!s2_map[s2[i]])
                s2_map[s2[i]]=s1[i];
            else if(s2_map[s2[i]]!=s1[i])
                return false;
        }
        return true;
    }
};