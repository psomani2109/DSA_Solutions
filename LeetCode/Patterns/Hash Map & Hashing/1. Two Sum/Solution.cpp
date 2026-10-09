class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> check;
        for(int i=0; i<nums.size(); i++) 
        {
            int u=target-nums[i];
            if(check.find(u)!=check.end())
            {
                return {i, check[u]};
            }
            else 
                check[nums[i]]=i;
        }
        return {};
    }
};