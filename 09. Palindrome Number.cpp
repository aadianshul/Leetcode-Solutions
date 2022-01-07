#define ll long long 
class Solution {
public:
    bool isPalindrome(ll x) {
        if(x==0)
            return true;
        if(x>0){
            ll y=0;
            for(int i=x; i>0; i=i/10){
                y=(y*10)+(i%10);
            }
            if(y==x)
                return true;
            else
                return false;
        } 
        else
            return false;
    }
};
