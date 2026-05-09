class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()==0) return 0;
        int n=nums.size();
        int last_smaller=INT_MIN;
        int count=0;
        int longest=1;
        for(int i=0;i<n;i++){
            if(nums[i]-1 ==last_smaller){
                count++;
                last_smaller=nums[i];
            }
            else if(nums[i]!=last_smaller){
                count=1;
                last_smaller=nums[i];
            }
            longest=max(longest,count);
        }
        return longest;
    }
};
