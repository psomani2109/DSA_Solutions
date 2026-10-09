class Solution {
  public:
    vector<int> twoSum(vector<int> &arr, int target) {
        // code here
        unordered_set <int> present;
        for(int i=0; i<arr.size(); i++)
        {
            if (arr[i]>target)
                continue;
            int k=target-arr[i];
            if(present.find(k)!=present.end())
                return {arr[i], k};
            present.insert(arr[i]);
        }
        return {};
    }
};