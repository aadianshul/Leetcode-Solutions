class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=nums.size();
        int i=0,k=0,c=0;
        while(i<l){
            if(nums[i]!=0)
            {
                nums[k]=nums[i];
                k++;
            }
            else{
                c++;
            }
            i++;
        }
        for(int i=l-c; i<l; i++){
            nums[i]=0;
        }
    }
};
