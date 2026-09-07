class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0;
        int r = n-1;

        int mw = 0;

        while(l<r){
            int width = r-l;
            int height = min(heights[l],heights[r]);
            int area = width * height;

            mw = max(mw,area);

            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return mw;
    }
};
