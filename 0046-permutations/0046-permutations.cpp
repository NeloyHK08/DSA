class Solution {
public:
    void permute(vector<int>& nums, vector<vector<int>>& ans, int l){
        int r = nums.size()-1;
        if(l == r){
            ans.push_back(nums);
            return;
        }
        else{
            for(int i=l; i<=r; i++){
                swap(nums[i], nums[l]);
                permute(nums, ans, l+1);
                swap(nums[i], nums[l]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int l = 0;
        permute(nums, ans, l);
        return ans;
    }
};