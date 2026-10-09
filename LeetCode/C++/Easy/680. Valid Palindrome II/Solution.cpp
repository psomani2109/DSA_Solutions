class Solution {
public:
    bool isPalindrome(string s, int l, int r)
    {
        while(l<r)
        {
            if(s[l]!=s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0, j=s.size()-1, waste=0;
        while(i<=j)
        {
            if(s[i]==s[j])
            {
                i++;
                j--;
            }
            else if(isPalindrome(s, i+1, j) || isPalindrome(s, i, j-1))
                return true;
            else 
                return false;
        }
        return true;
    }
};