class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <int, int> prefix_count;
        prefix_count[0]=1;
        int sums=0,  count=0;
        for(int i=0; i<nums.size(); i++)
        {
            sums+=nums[i];
            if(prefix_count.find(sums-k)!=prefix_count.end())
                count+=prefix_count[sums-k];
            
            prefix_count[sums]++;
        }
        return count;
    }
};