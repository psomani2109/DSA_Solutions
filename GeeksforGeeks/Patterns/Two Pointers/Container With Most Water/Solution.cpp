class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int i=0, j=arr.size()-1, area=0, max_area=0;
        while(i<j)
        {
            area=(j-i)* min(arr[i], arr[j]);
            max_area=max(max_area, area);
            (arr[i]<=arr[j])? i++ : j-- ;
        }
        return max_area;
    }
};