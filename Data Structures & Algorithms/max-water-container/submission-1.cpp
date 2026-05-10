class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0,right=heights.size()-1;
        int maxArea=0;
        while(left<=right){
            int width=right-left;
            int minHeight=min(heights[left],heights[right]);
            int area=width*minHeight;

            maxArea=max(maxArea,area);
            if(heights[left]<heights[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxArea;
    }
};
