class Solution {
public:
    void swap(int *a, int *b)
    {
        int temp = *a;
         *a = *b;
         *b = temp;
    }
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int break_index=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i+1]>nums[i])
            {
                break_index=i;
                break;
            }
        }
        // break_index = 1;
        if(break_index == -1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>break_index;i--)
        {
            if(nums[i]>nums[break_index])
            {
                swap(&nums[i],&nums[break_index]);
                break;
            }
        }
        reverse(nums.begin()+break_index+1,nums.end());
    }
};