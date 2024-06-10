class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int counter= 0;
        int el;

        for(int i=0;i<nums.size();i++)
        {
            if(counter==0)
            {
                counter= 1;
                el = nums[i];
            }
            else if(nums[i]==el) counter++;
            else counter--;
        }
        return el;
    }
};