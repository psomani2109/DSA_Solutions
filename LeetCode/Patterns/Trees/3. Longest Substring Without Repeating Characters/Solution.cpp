class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0, right=0, max_len=0;
        unordered_set <char> check;
        while(right<s.size())
        {
            if(check.find(s[right])==check.end())
            {
                check.insert(s[right]);
                right++;
            }
            else if(check.find(s[right])!=check.end())
            {
                max_len=max(max_len, right-left);
                while(s[left]!=s[right])
                {
                    check.erase(s[left]);
                    left++;
                }
                left++;
                //check.insert(s[right]);
                right++;
            }
        }
        max_len=max(max_len, right-left);
        return max_len;
        //abdcbdacbebacdacabd   set=a,c,b,d   max=5
        //               l   r
    }   
};