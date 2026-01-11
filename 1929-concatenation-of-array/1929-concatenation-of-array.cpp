class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        
        int k = nums.size();
        vector<int> ans(2* k);
        for(int i =0; i < nums.size(); i ++){
           ans[i] = nums[i];
           ans[i+k] = nums[i];
        }
        return ans;
    }
};