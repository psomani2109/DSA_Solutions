class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int count=0, l=0, r=0, len=0;

        for(r=0; r<nums.size(); r++)
        {
            if(nums[r]==0)
                count++;
            while(count>k)
            {
                if(nums[l]==0)
                    count--;
                l++;
            }
            len=max(len, r-l+1);
        }
        return len;
    }
};