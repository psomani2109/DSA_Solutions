class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        vector<int> present(52, 0);
        string result="";
        for(char ch:s)
        {
            if(islower(ch))
                present[ch-'a']=1;
            else if(isupper(ch))
                present[26+(ch-'A')]=1;
        }
        for(char ch:s)
        {
            if(islower(ch) && present[ch-'a']==1)
            {
                result.push_back(ch);
                present[ch-'a']=0;
            }
            else if(isupper(ch) && present[26+(ch-'A')]==1)
            {
                result.push_back(ch);
                present[26+(ch-'A')]=0;
            }
        }
        return result;
    }
};