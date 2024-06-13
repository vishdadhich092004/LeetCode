class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int count_0 = 0;
        int count_1 = 0;
        int count_2 = 0;

        for(int i=0;i<n;i++)
        {
            if(nums[i]==0) count_0++;
            if(nums[i]==1) count_1++;
            if(nums[i]==2) count_2++;
        }
    for(int i=0;i<count_0;i++)
    nums[i]=0;
    for(int i=count_0;i<count_0+count_1;i++)
    nums[i]=1;
    for(int j=count_0+count_1;j<n;j++)
    nums[j]=2;
    }
};