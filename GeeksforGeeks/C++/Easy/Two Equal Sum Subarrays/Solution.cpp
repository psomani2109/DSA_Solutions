class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int total=0;
        for(int i:arr)
        {
            total+=i;
        }
        if(total%2!=0)
            return false;
            
        int i=0, sum_i=arr[0], j=arr.size()-1, sum_j=arr[arr.size()-1];
        while(i<j)
        {
            if(sum_i<sum_j)
            {
                i++;
                sum_i+=arr[i];
            }
            else if(sum_i>sum_j)
            {
                j--;
                sum_j+=arr[j];
            }
            else if(sum_i==sum_j && i+1==j)
                return true;
            else if(sum_i==sum_j)
            {
                i++;
                 sum_i+=arr[i];
                j--;
                sum_j+=arr[j];
            }
        }
        return false;
    }
};
