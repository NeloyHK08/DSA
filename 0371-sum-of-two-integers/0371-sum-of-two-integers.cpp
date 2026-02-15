class Solution {
public:
    int getSum(int a, int b) {
        while(b != 0){
            int carryForward = a & b;
            a ^= b;
            b = carryForward << 1;
        }
        return a;
    }
};