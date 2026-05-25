class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        vector<int>res(n);
        for(int i=0;i<n;i++){
            int j=i+1;
            int count=0;
            while(j<n){
                if(temperatures[j]>temperatures[i]){
                    count++;
                    break;
                }
                j++;
                count++;
            }
            count= (j==n) ? 0:count;
            res[i]=count;
        }
        return res;
    }
};
