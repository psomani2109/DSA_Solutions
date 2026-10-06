class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map <char, int> last;
        for(int i=0; i<s.size(); i++)
        {
            last[s[i]]=i;
        }
        int start=0, end=0;
        vector<int> section_size;
        for(int i=0; i<s.size(); i++)
        {
            end=max(end, last[s[i]]);
            if(i==end)
            {
                section_size.push_back(end+1-start);
                start=i+1;
            }
        }
        return section_size;
    }
};