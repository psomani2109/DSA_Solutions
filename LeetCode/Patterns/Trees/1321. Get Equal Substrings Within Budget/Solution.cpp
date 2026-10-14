class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        int l=0, len=0, cost=0;
        int n = s.size()
        for(int r=0; r<n; r++)
        {
            cost+=abs(s[r]-t[r]);
            while(cost>maxCost)
            {
                cost-=abs(s[l]-t[l]);
                l++;
            }
            len=max(len, r-l+1);
        }
        return len;
    }
};