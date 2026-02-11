class Solution {
public:
    void getCombinationSum(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& ds, int index){
       if(index == candidates.size()) return;
       //target match
       if(target == 0){
        ans.push_back(ds);
        return;
       }

       //include the element
       if(candidates[index] <= target){
        ds.push_back(candidates[index]);
        getCombinationSum(candidates, target - candidates[index], ans, ds, index);
        ds.pop_back();
       }
       //exclude the element
       getCombinationSum(candidates, target, ans, ds, index+1); 
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        getCombinationSum(candidates, target, ans, ds, 0);
        return ans;
    }
};