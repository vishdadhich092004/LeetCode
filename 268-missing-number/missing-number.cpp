class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum_1 = (n*(n+1))/2;
        int sum_2 = 0;
        for(int i=0;i<n;i++)
        {
            sum_2 += nums[i];
        }
        return sum_1-sum_2;
    }
};