class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l=0, product=1, count=0;
        for(int r=0; r<nums.size(); r++)
        {
            product*=nums[r];
            
                
            
            while(product>k)
            {
                product/=nums[l++];
            }
            count+=(r-l+1);
        }
        return count;
    }
};