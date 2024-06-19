class Solution {
public:
    int xorOperation(int n, int start) {
        
        int xr =0;

    int i= start;
        while(n--)
        {
            xr  = xr ^ i;
            i  = i+2;
        }
        return xr;

    }
};