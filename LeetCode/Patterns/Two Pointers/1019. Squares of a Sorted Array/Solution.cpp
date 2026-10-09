class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0, j=nums.size()-1;
        vector <int> result;
        while(i<=j)
        {
            if(abs(nums[i])>abs(nums[j]))
            {
                result.push_back(nums[i]*nums[i]);
                i++;
            }
            else if(abs(nums[j])>=abs(nums[i]))
            {
                result.push_back(nums[j]*nums[j]);
                j--;
            }
        }
        reverse(result.begin(), result.end());
        return result;
    }
};