class Solution {
public:
    int hammingWeight(int n) {
        string bits = "";
        while (n > 0) {
           bits = char('0' + (n & 1)) + bits;
           n >>= 1;
        }

        int count =0;
        for(int i =0 ;i < bits.size(); i ++){
            if(bits[i]=='1'){
                count++;
            }
        }
        return count;
    }
};