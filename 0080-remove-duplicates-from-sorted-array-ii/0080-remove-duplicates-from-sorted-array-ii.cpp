class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0, r = 0;
        while(r < nums.size()){
            int count = 1;
            while(r+1<nums.size() && nums[r] == nums[r+1]){
                r++;
                count++;
            }
            int countNum = min(2,count);
            for(int i=0; i<countNum; i++){
                nums[l] = nums[r];
                l++;
            }
            r++;
        }
        return l;
    }
};