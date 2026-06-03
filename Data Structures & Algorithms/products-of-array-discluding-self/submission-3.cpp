class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        int prefix = 1;
        vector<int> res(size);
        for (int i = 0; i < size; i++) {
            res[i] = prefix;
            prefix *= nums[i];
        }
        int postfix = 1;

        for (int i = size - 1; i >= 0; i--) {
            res[i] *= postfix;
            postfix *= nums[i];
        }
        return res;

    }
};
