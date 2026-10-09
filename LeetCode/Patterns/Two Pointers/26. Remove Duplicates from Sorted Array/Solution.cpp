class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int read=1, write=1;
        if(nums.size()==1)
            return 1;
        while(read<nums.size())
        {
            if(nums[read]==nums[write-1])
                read++;
            else
                swap(nums[read++], nums[write++]);
        }
        return write;
    }
};