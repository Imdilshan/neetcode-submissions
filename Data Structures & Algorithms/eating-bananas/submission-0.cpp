class Solution {
public:
    bool canEat(vector<int> piles, int h, int k){
        long long total = 0;
        for(int i = 0; i < piles.size(); i++){
            total += (piles[i] +k -1) / k;
        }
        if(total <= h) return true;
        return false;

    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());
        while(low <= high){
            int mid = low + (high - low) / 2;
            bool can = canEat(piles, h, mid);
            if(can){
                high = mid - 1;
            }
            else{
                low = mid+1;
            }
        }
        return low;
    }
};
