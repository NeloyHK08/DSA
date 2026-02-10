class Solution {
    public:
    void generate(vector<vector<int>>& ans, vector<int>& nums,vector<int>& subset, int l) {

    ans.push_back(subset);

    for (int i = l; i < nums.size(); i++) {

    // 🔥 skip duplicates at same level
    if (i > l && nums[i] == nums[i - 1])
    continue;

    subset.push_back(nums[i]);
    generate(ans, nums, subset, i + 1);
    subset.pop_back(); // backtrack
    }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(), nums.end()); // 🔥 important
    vector<vector<int>> ans;
    vector<int> subset;
    generate(ans, nums, subset, 0);
    return ans;
    }

};
