class Solution {
  public:
    string printString(string &s, char ch, int count) {
        // code here
        string str="";
        for(int j=0; j<s.size(); j++)
        {
            if(s[j]==ch)
                count--;
            if(count==0)
                return s.substr(j+1);
        }
        return str;
    }
};