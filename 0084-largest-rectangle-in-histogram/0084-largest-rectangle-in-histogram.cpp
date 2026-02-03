class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int res = 0;
        heights.push_back(0);
        vector<int> st;
        int n = heights.size();
        for(int i=0; i<n; i++){
            while(!st.empty() && heights[st.back()]>=heights[i]){
                int height = heights[st.back()];
                st.pop_back();
                int width = st.empty()?i:i-st.back()-1;
                res = max(res,height*width);
            }
            st.push_back(i);
        }
        return res;
    }
};