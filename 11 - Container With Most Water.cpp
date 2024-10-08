class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        
        int curr = 0;
        int result = 0;
        
        while (left < right) {
            curr = (right - left) * min(heights[left], heights[right]);
            result = max(result, curr);
            
            if (heights[left] <= heights[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return result;
    }
};