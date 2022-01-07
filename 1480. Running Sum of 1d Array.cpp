class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int l=nums.size();
        vector <int> sum(l,0);
        int cursum=0;
        for(int i=0; i<l; i++){
            cursum=cursum+nums[i];
            sum[i]=cursum;
        }
        return sum;
    }
};
