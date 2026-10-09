class Solution {
  public:
    vector<string> winner(vector<string> &arr) {
        // code here
        unordered_map <string, int> freq;
        int max_freq=0;
        for(string s:arr)
        {
            freq[s]++;
        }
        string candidate="";
        for(auto pair:freq)
        {
            if(pair.second==max_freq)
            {
                
                if(candidate=="" || pair.first<candidate)
                    candidate=pair.first;
            }
            else if(pair.second>max_freq)
            {
                max_freq=pair.second;
                candidate=pair.first;
            }
                    
        }
        return {candidate, to_string(max_freq)};
    }
};