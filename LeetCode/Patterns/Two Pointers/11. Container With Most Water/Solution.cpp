class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1, max_area=0;
        while(left<right)
        {
            int diff=min(height[left], height[right]);
            max_area=max(max_area, (right-left)*diff);
            if(height[left]<height[right])
                left++;
            else
                right--;
        }
        return max_area;
    }
};