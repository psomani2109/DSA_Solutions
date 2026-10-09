class Solution {
  public:
    int dominantPairs(vector<int> &arr) {
        // Code here
        sort(arr.begin(), arr.begin()+(arr.size() / 2));
        sort(arr.begin()+(arr.size() / 2), arr.end());
        int i=0, j=arr.size()/2, pairs=0;
        while(i<arr.size() / 2 && j<arr.size())
        {
            if(arr[i]>=5*arr[j])
            {
                pairs+=(arr.size()/2)-i;
                j++;
            }
            else
                i++;
        }
        return pairs;
    }
};