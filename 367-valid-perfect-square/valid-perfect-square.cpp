class Solution {
public:
    bool isPerfectSquare(int num) {
        double root = sqrt(num);
        if(round(root)!=root)
        return false;
        return true;
    }
};