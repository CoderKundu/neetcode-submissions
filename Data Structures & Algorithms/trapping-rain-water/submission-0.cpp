class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int lmax = INT_MIN, rmax = INT_MIN;
        int ans = 0;
        while (left < right) {
            lmax = max(lmax, height[left]);
            rmax = max(rmax, height[right]);
            if (lmax < rmax)
                ans += lmax - height[left++];
            else
                ans += rmax - height[right--];
        }
        return ans;
    }
};
