class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int xor_ans = 0;

        for(int i=0;i<n;i++)
        {
            xor_ans = xor_ans ^ nums[i];
        }

        return xor_ans;
    }
};