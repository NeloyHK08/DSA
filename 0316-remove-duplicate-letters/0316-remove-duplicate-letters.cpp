class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans = "";
        vector<int> cnt(26,0), vis(26,0);
        for(auto x : s){
            cnt[x-'a']++;
        }
        for(auto x : s){
            cnt[x-'a']--;
            if(!vis[x-'a']){
                while(ans.size()>0 && ans.back() > x && cnt[ans.back()-'a'] > 0){
                    vis[ans.back()-'a'] = 0;
                    ans.pop_back();
                }
                ans+=x;
                vis[x-'a'] = 1;
            }
        }
        return ans;
    }
};