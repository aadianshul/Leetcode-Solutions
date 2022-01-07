class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int l=nums.size();
        int pr=1,c=0;
        for(int i=0; i<l; i++){
            if(nums[i]==0)
                c++;
        }
        if(c>1){
            for(int i=0; i<l; i++){
            
            nums[i]=0;
            }
        }
        else if(c==1){
            for(int i=0; i<l; i++){
                if(nums[i]!=0)
                    pr=pr*nums[i];
            }
             for(int i=0; i<l; i++){
                if(nums[i]==0)
                    nums[i]=pr;
                else
                    nums[i]=0;
              }
         } 
        else{
        for(int i=0; i<l; i++){
            pr=pr*nums[i];
        }
        for(int i=0; i<l; i++){
            nums[i]=pr/nums[i];
            }
        }
        return nums;
    }
};
