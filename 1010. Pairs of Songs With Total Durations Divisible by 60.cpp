class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count=0;
        int rarr[60]={0};
        int le=time.size();
        for(int i=0; i<le; i++){
            int n=time[i]%60;
            rarr[n]++;
        }
        int f=1,l=59;
        while(f<=29){
            count=count + (rarr[f]*rarr[l]);
            f++; l--;  
        }
        f=rarr[0]-1;
        l=rarr[30]-1;
        count=count + ((f*(f+1))/2) + ((l*(l+1))/2);
        return count;
    }
};
