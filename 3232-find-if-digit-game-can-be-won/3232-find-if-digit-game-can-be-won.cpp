class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int Add=0; //double digit sum
        int add=0; //single digit sum
        for(int i=0;i<nums.size(); i++){
            if(nums[i]>= 10){
                Add =Add+ nums[i];
            }
            else{
                add= add+nums[i];
            }
        }
        if(Add != add){
            return true;
        }else return false;
    }
};