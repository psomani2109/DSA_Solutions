class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int left_max=0, part=0, maxi;
        for(int i=0; i<nums.size(); i++)
        {
            maxi=max(maxi, nums[i]);
            if(i<=part)
                left_max=max(left_max, nums[i]);
            if(nums[i]<left_max)
            {
                part=i;
                left_max=maxi;
            }
        }
        return part+1;
    }
};