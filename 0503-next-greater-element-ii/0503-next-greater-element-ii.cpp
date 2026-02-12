class Solution {
    public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1);
    stack<int> st; // store values

    for (int i = 2 * n - 1; i >= 0; i--) {
    int current = nums[i % n];

    // Remove smaller elements
    while (!st.empty() && st.top() <= current) {
    st.pop();
    }

    // Only fill result in first pass
    if (i < n) {
    if (!st.empty()) {
    result[i] = st.top();
    }
    }

    st.push(current);
    }

    return result;
    }
    };
