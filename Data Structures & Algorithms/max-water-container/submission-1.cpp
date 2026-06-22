class Solution {
public:
    int maxArea(vector<int>& heights) {
        int ans = 0;
        int n = heights.size();

        int low = 0, high = n-1;

        while(low <= high){
            int dist = high - low;
            int height = min(heights[low], heights[high]);

            int res = dist * height;
            ans = max(ans, res);

            if(heights[low] < heights[high]) low++;
            else high--;
        }
        return ans;
    }
};
