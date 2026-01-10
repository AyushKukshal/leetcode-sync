class Solution {
public:
    int countInRange(vector<int>& nums, int num, int left, int right) {
        int count = 0;
        for (int i = left; i <= right; i++) {
            if (nums[i] == num) count++;
        }
        return count;
    }

    int majorityRec(vector<int>& nums, int left, int right) {
        if (left == right) return nums[left];

        int mid = left + (right - left) / 2;

        int leftMajor = majorityRec(nums, left, mid);
        int rightMajor = majorityRec(nums, mid + 1, right);

        if (leftMajor == rightMajor) return leftMajor;

        int leftCount = countInRange(nums, leftMajor, left, right);
        int rightCount = countInRange(nums, rightMajor, left, right);

        return (leftCount > rightCount) ? leftMajor : rightMajor;
    }

    int majorityElement(vector<int>& nums) {
        return majorityRec(nums, 0, nums.size() - 1);
    }
};
