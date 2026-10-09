class Solution {
  public:
    int search(string &pat, string &txt) {
        // code here
        vector<int> patt(26, 0), window(26, 0);
        int count=0;
        for(char ch:pat)
        {
            patt[ch-'a']++;
        }
        for(int i=0; i<pat.size(); i++)
        {
            window[txt[i]-'a']++;
        }
        if(window==patt)
            count++;
        
        for(int i=1; i+pat.size()<=txt.size(); i++)
        {
            window[txt[i-1]-'a']--;
            window[txt[i+pat.size()-1]-'a']++;
            if(window==patt)
                count++;
        }
        return count;
    }
};