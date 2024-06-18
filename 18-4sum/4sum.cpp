class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        int n = nums.size(); 
        sort(nums.begin(),nums.end());
        // we'll keep two pointers static (i & j) and other two pointers moving (k & l)

        for(int i=0;i<n;i++)
        {
            if(i>0 && nums[i]==nums[i-1]) continue; // ignoring the duplicates for 'i'.
            for(int j=i+1;j<n;j++)
            {
                if(j>i+1 && nums[j]==nums[j-1]) continue; // ignoring the duplicates for 'j'.

                int k = j+1;
                int l = n-1;
                while(k<l)
                {
                    long long sum = nums[i]; // do it in steps otherwise it crosses the limit.
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];

                    // three possibilities :
                    if(sum>target) l--;
                    else if(sum<target) k++;
                    else if(sum==target)
                    {
                        vector<int>temp ={nums[i],nums[j],nums[k],nums[l]};
                        ans.push_back(temp);
                        // after pushing move the variable pointers
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }

                }

            }
        }
        return ans;
    }
};