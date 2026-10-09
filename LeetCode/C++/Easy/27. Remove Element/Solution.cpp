class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j=nums.size()-1, i;
        if(nums.empty())
            return 0;
        for(i=0; i<=j; i++)
        {
            while(j>=i && nums[j]==val)
            {
                j--;
            }
            if(i>j)
                break;
            if(nums[i]==val)
                swap(nums[i], nums[j--]);
        }
        return j+1;
        
    }
};