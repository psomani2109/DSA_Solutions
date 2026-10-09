class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector <int> result(temperatures.size(), 0);
        for(int i=0; i<temperatures.size(); i++)
        {
            if(st.empty())
                st.push(i);
            while(!st.empty() && temperatures[i]>temperatures[st.top()])
            {
                result[st.top()]=i-st.top();
                st.pop();
            }
            st.push(i);
            /*else if(temperatures[i]<temperatures[st.top()])
                st.push(i);*/
        }
        return result;
    }
};