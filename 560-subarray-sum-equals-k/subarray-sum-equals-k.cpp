class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int preSum = 0;
        int counter = 0;

        map<int,int>mpp;
        mpp[0] = 1;

        for(int i=0;i<nums.size();i++)
        {
            preSum = preSum + nums[i];
            int remove = preSum - k;
            counter  = counter + mpp[remove];
            mpp[preSum]++;
        }
        return counter;
    }
};