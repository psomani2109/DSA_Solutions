class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result(nums.size(), pivot);
        int l=0, r=nums.size()-1;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]<pivot)
                result[l++]=nums[i];
        }
        for(int i=nums.size()-1; i>=0; i--)
        {
            if(nums[i]>pivot)
                result[r--]=nums[i];
        }
        return result;
    }
};