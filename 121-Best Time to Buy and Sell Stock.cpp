class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx=0,mn=prices[0],l=prices.size();
        for(int i=1; i<l; i++){
            mn=min(mn,prices[i]);
            mx=max(mx, prices[i]-mn);
        }
        return mx;
    }
};
