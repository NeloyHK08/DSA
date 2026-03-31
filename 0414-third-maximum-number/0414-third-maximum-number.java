class Solution {
    public int thirdMax(int[] nums) {
        java.util.HashSet<Integer> set = new java.util.HashSet<>();

        for(int num : nums) {
            set.add(num);
        }

        if(set.size() < 3){
            int max = Integer.MIN_VALUE;
            for(int num : set) {
                max = Math.max(max, num);
            }
            return max;
        }

        for(int i=0; i<2; i++){
            int max = Integer.MIN_VALUE;
            for(int num : set) {
                max = Math.max(max, num);
            }
            set.remove(max);
        }

        int thirdMax = Integer.MIN_VALUE;
        for(int num : set) {
            thirdMax = Math.max(thirdMax, num);
        }
        return thirdMax;
    }
}