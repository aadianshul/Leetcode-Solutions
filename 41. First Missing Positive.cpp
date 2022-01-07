class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int l=nums.size(),ans=0;
        vector <int> v(l,0);
        for(int i=0; i<l; i++){
            int n=nums[i];
            if(nums[i]>0 && nums[i]<=l)
                v[n-1]=1;
        }
        for(int i=0; i<l; i++){
            if(v[i]==0)
            {
                ans=i+1;
                break;
            }
        }
        if(ans==0)
            ans=l+1;
        return ans;
    }
};
