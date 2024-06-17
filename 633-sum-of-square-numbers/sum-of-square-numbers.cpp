class Solution {
public:
    bool judgeSquareSum(int c) {
        unordered_set<long long>st;
        for(int i=0;i<=sqrt(c);i++)
        st.insert(i*i);

        for(long long it: st)
        {
            int other_num = c - it;
            if(st.find(other_num)!=st.end())
                return true;
        }

        return false;

    }
};