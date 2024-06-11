class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int positive_pointer = 0;
        int negative_pointer = 1;
        vector<int> arranged_nums(nums.size(),0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0){
                arranged_nums[positive_pointer] = nums[i];
                positive_pointer +=2;
            }
            else{
                arranged_nums[negative_pointer] = nums[i];
                negative_pointer +=2;
            }
        }
        return arranged_nums;
    }
};