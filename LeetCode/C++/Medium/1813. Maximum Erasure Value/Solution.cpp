class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        vector<bool> present(100001, false);
        int l=0, r=0, sum=0, max_sum=0;

        for(r=0; r<nums.size(); r++)
        {
            while(present[nums[r]]==true)
            {
                sum-=nums[l];
                present[nums[l]]=false;
                l++;
            }
            present[nums[r]]=true;
            sum+=nums[r];
            max_sum=max(sum, max_sum);
        }
        return max_sum;
    }
};