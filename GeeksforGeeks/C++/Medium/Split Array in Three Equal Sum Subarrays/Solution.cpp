//  Class Solution to contain the method for solving the problem.
class Solution {
  public:
    // Function to determine if array arr can be split into three equal sum sets.
    vector<int> findSplit(vector<int>& arr) {
        // code here
        int sum=0, total=0;
        vector <int> result;
        
        for(int k:arr) total+=k;
        if(total%3!=0 || arr.size()<3)
            return {-1, -1};
            
        for(int i=0; i<arr.size(); i++)
        {
            sum+=arr[i];
            if(sum==total/3)
            {
                result.push_back(i);
                sum=0;
            }
            else if(sum>total/3)
                return {-1,-1};
            if(result.size()==2)
                break;
        }
        return result;
    }
};