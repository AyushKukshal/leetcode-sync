class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elementSum=0 ;
        int DigitSum=0 ;
          for (int x : nums){
            elementSum += x;
            int temp = x ;
            while( temp>0){
                DigitSum += temp%10;
                temp /= 10;
            }
          }
          return abs(elementSum - DigitSum);
    }
};