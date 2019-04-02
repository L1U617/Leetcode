class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        else if(x == 0) return true;
        else{
            int tmp = x, remain;
            double sum = 0;
            while(tmp != 0){
                remain = tmp % 10;
                sum = sum * 10 + remain;
                tmp = tmp / 10;
            }
            if(sum == x) return true;
            else return false;
        }
    }
};
