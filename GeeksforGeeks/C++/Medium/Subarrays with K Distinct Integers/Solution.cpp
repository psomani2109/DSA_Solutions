class Solution {
  public:
    int atMost(vector<int> &arr, int j)
    {
        int l=0, count=0;
        unordered_map <int, int> freq;
        for(int r=0; r<arr.size(); r++)
        {
            
            freq[arr[r]]++;
            
            while(freq.size()>j)
            {
                freq[arr[l]]--;
                if(freq[arr[l]]==0)
                    freq.erase(arr[l]);
                l++;
            }
            count+=(r-l+1);
        }
        return count;
    }
    
    int exactlyK(vector<int> &arr, int k) {
        // code here
        return atMost(arr, k)-atMost(arr, k-1);
    }
};