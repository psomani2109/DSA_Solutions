class Solution {
public:
    int atMost(vector<int>& nums, int y)
    {
        int count=0, l=0;
        unordered_map<int, int> unique;
        for(int r=0; r<nums.size(); r++)
        {
            unique[nums[r]]++;
            while(unique.size()>y)
            {
                unique[nums[l]]--;
                if(unique[nums[l]]==0)
                    unique.erase(nums[l]);
                l++;
            }
            count+=r-l+1;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k-1);
    }
};