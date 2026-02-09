class Solution {
public:
    int fib(int n) {
        if(n == 0) return 0;
        if(n<2) return 1;
        int prev = 0;
        int ans = 1;
        for(int i=2; i<=n; i++){
            int temp = ans;
            ans = ans + prev;
            prev = temp;
        }
       return ans;
    }
};