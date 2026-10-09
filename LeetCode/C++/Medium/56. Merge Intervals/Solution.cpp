class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(intervals.begin(), intervals.end());
        for(int i=0; i<intervals.size(); i++)
        {
            if(result.empty())
                result.push_back({intervals[i][0], intervals[i][1]});
            else if(result.back()[1]<intervals[i][0])
                result.push_back({intervals[i][0], max(intervals[i][1], result.back()[1])});
            else if(result.back()[1]>=intervals[i][0])
                result.back()[1]=max(intervals[i][1], result.back()[1]);
            
        }
        return result;
    }
};