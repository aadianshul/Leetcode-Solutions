class Solution {
public:
    bool asteroidsDestroyed(int mas, vector<int>& asteroids) {
        sort(asteroids.begin(), asteroids.end());
        int l=asteroids.size();
        long long mass=mas;
        for(int i=0; i<l; i++){
            if(mass<asteroids[i])
                return false;
            mass=mass+asteroids[i];
        }
        return true;
    }
};
