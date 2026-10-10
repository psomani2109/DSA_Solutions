class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int mini=INT_MAX, left=0, right=-1, sum=0, len=0;

        while(right<int(nums.size()))
        {
            if(sum<target)
            {
                right++;
                if(right>=nums.size())
                    break;
                sum+=nums[right];
            }
            else if(sum>=target)
            {
                len=right-left+1;
                mini=min(mini, len);
                sum-=nums[left];
                left++;
            }
        }
        return (mini==INT_MAX)? 0:mini;
    }
};