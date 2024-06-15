class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int, int>mpp;
        int n = nums.size();

        for(int i=0;i<n;i++)
        {
            if( nums[i]%2==0)
            mpp[nums[i]]++;
        }
        if(mpp.size()==0) return -1;
        int maxi = INT_MIN;
        int ans = -1;
        for(auto it:mpp)
        {
            if(it.second>maxi)
            {
            maxi = it.second;
            ans = it.first;
            }
        }
    return ans;
    }
};