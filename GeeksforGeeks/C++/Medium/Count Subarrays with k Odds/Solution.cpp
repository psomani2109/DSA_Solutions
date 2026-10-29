class Solution {
  public:
    int atMost(vector<int>& arr, int y)
    {
        int count=0, l=0, r=0, odds=0;
        for(r=0; r<arr.size(); r++)
        {
            if(arr[r] % 2 != 0)
                odds++;
            while(odds>y)
            {
                if(arr[l] % 2 != 0)
                    odds--;
                l++;
            }
            count+=r-l+1;
        }
        return count;
    }
    int countSubarrays(vector<int>& arr, int k) {
        // code here
        return atMost(arr, k) - atMost(arr, k-1);
    }
};