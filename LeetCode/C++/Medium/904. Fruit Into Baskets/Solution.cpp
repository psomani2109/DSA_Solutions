class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map <int, int> freq;
        int l=0, r=0, maxi=0;
        for(r=0; r<fruits.size(); r++)
        {
            freq[fruits[r]]++;
            while(freq.size()>2)
            {
                freq[fruits[l]]--;
                if(freq[fruits[l]]==0)
                    freq.erase(fruits[l]);
                l++;
            }
            maxi=max(maxi, r-l+1);
        }
        return maxi;
    }
};