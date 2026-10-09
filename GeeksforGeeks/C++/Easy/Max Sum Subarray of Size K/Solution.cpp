class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int sum=0;
        /*if(arr.size()<k)
            return -1;*/
        for(int i=0; i<k; i++)
        {
            sum+=arr[i];
        }
        
        int max_sum=sum;
        for(int i=1; i+k<=arr.size(); i++)
        {
            sum-=arr[i-1];
            sum+=arr[i+k-1];
            max_sum=max(sum, max_sum);
        }
        return max_sum;
    } 
};