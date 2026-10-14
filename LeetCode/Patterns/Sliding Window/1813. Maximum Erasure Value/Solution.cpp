class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int, int> freq;
        int l=0, r=0, sum=0, max_sum=0;

        for(r=0; r<nums.size(); r++)
        {
            freq[nums[r]]++;
            while(freq[nums[r]]>1)
            {
                sum-=nums[l];
                freq[nums[l]]--;
                l++;
            }
            sum+=nums[r];
            max_sum=max(sum, max_sum);
        }
        return max_sum;
    }
};