class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int left, right;
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        if (nums.size() < 3) return {};
        for(int i=0; i+2<nums.size(); i++)
        {
            if(i!=0 && nums[i]==nums[i-1])
                continue;
            left=i+1;
            right=nums.size()-1;
            int target=0-nums[i];
            while(left<right)
            {
                if(nums[left]+nums[right]<target)
                    left++;
                else if(nums[left]+nums[right]>target)
                    right--;

                else if(nums[left]+nums[right]==target)
                {
                    result.push_back({nums[i], nums[left], nums[right]});
                    int non_left=nums[left], non_right=nums[right];
                    while(nums[left]==non_left && left<right)
                    {
                        left++;
                    }
                    while(nums[right]==non_right && left<right)
                    {
                        right--;
                    }
                }
            }
        }
        return result;
    }
};