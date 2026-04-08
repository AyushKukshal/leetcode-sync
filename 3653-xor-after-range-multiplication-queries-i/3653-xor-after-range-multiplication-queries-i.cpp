class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        for(auto &q:queries ){
            int l = q[0];
            int r = q[1];
            int k= q[2];
            int v =q[3];
            for(int idx= l; idx<=r; idx+=k){
           nums[idx] = ((long long) nums[idx] * v) % (1000000007);
            }
        }
        
        int result =0;
        for(int i=0; i< nums.size(); i++){
            result ^= nums[i];
        }
        return result;
    }
};