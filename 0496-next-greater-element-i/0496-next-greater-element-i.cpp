class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        stack<int> s;

        for (int i = nums2.size() - 1; i >= 0; i--) {
            int element = nums2[i];

            // Pop all elements <= current element
            while (!s.empty() && s.top() <= element) {
                s.pop();
            }

            // If stack empty, no greater element
            mp[element] = s.empty() ? -1 : s.top();

            // Push current element
            s.push(element);
        }

        vector<int> result;
        for (int x : nums1) {
            result.push_back(mp[x]);
        }

        return result;
    }
};
