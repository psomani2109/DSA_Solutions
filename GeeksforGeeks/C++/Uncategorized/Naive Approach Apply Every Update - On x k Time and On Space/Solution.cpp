class Solution {
  public:
    vector<int> update(int n, vector<int>& updates) {
        // code here
        vector<int> arr(n, 0);
        for(int j=0; j<updates.size(); j++)
        {
            if(updates[j] <= 0 || updates[j]>arr.size())
                continue;
            else
                arr[updates[j]-1]++;
        }
        for(int i=1; i<arr.size(); i++)
        {
            arr[i]+=arr[i-1];
        }
        return arr;
    }
};