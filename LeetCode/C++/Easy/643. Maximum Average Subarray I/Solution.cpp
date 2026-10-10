class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       double avg=0, max_avg=0, sum=0;
       for(int i=0; i<k; i++)
       {
            sum+=nums[i];
       }
        max_avg=sum/k;

        for(int i=1; i+k<=nums.size(); i++)
        {
            sum-=nums[i-1];
            sum+=nums[i+k-1];
            avg=sum/k;
            max_avg=max(max_avg, avg);
        }
        return max_avg;
    }
    /*The error happens because C++’s std::max(a, b) function is extremely strict about data types.

std::max is defined as a template function that expects both arguments to have the exact same type (std::max<T>(T a, T b)).*/
};