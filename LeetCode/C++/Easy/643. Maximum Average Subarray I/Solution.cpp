class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_avg=0;
        double sum=0;
        if(k>nums.size())
            return 0;
        for(int i=0; i<k; i++)
        {
            sum+=nums[i];
        }
        max_avg=sum/k;
        for(int i=0; i<nums.size()-k; i++)
        {
            sum+=nums[i+k];
            sum-=nums[i];
            max_avg=max(max_avg, sum/k);
        }
        return max_avg;
    }
};