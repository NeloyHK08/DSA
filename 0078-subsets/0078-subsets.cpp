class Solution {
public:
    void generate(vector<vector<int>>& ans, vector<int>& nums, vector<int>& subset, int l){
        ans.push_back(subset);

        for(int i=l; i<nums.size(); i++){
            subset.push_back(nums[i]);
            generate(ans, nums, subset, i+1);
            subset.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        int l=0;
        generate(ans, nums, subset, l);
        return ans;
    }
};