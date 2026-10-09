class Solution {
  public:
    void segregateEvenOdd(vector<int>& arr) {
        // code here
        int l=0, r=0;
        while(r<arr.size())
        {
            if(arr[r] % 2 == 0)
                swap(arr[l++], arr[r++]);
            else
                r++;
        }
        sort(arr.begin(), arr.begin()+l);
        sort(arr.begin()+l, arr.end());
    }
};