class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=2, j=2;
        if(nums.size()==1)
            return 1;
        for(j=2; 
            j<nums.size();
            j++)
        {
            if(nums[j]==nums[i-2])
                continue;
            else
            {
                swap(nums[i], nums[j]);
                i++;
            }
        }
        return i;
    }
};