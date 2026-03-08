class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int count =0; 
        int n = nums.size();
        int ans = 0;
        for (int i = 0; i < n; i++) {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};