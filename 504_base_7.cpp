class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        string ret;
        int quotient = abs(num), remainder;
        while(quotient != 0){
            remainder = quotient % 7;
            quotient /= 7;
            ret.insert(ret.begin(), remainder + '0');
        }
        if(num < 0) ret.insert(ret.begin(), '-');
        return ret;
    }
};
