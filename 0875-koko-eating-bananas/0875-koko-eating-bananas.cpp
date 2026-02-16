class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(piles.begin(), piles.end());
        while(left<right){
            int mid = left + (right-left)/2;
            int currHours = 0;
            for(int &i:piles){
                currHours += (i+mid-1)/mid;
            }
            if(currHours > h){
                left = mid+1;
            }else{
                right = mid;
            }
        }
        return left;
    }
};