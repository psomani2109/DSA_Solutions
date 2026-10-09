class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low=0, mid=0, high=nums.size()-1;
        
        while(mid<=high)
        {
            while(nums[low]==0 && low<mid)
            {
                low++;
            }
            while(nums[high]==2 && mid<high)
            {
                high--;
            }
            if(nums[mid]==0)
            {
                swap(nums[mid], nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[mid], nums[high]);
                high--;
                
            }
            else
                mid++;
        }
    }
};