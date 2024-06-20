class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        for(int i=0;i<n;i++)
            nums1[i+m]=nums2[i];

    
        int len = m+n;
        int gap=len/2 + len%2;
       
        while(gap>0){
            int left =0;
            int right = left + gap;
            while(right<len){
                if(nums1[left]>nums1[right]){
                    swap(nums1[left],nums1[right]);
                }
                left++;right++;
            }
            if(gap==1) break;
            else gap = gap/2 + gap%2;
        }
    }
};