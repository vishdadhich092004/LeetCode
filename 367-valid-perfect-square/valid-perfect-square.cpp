class Solution {
public:
    bool isPerfectSquare(int num) {
        if(round(sqrt(num))!=sqrt(num))
        return false;
        return true;
    }
};