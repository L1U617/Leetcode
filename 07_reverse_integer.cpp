class Solution {
public:
    int reverse(int x) {
        double ret = 0;
        if(x == INT_MIN) return 0;
        int tmp = abs(x), remainder, cnt = 0;
        while(tmp != 0){
            remainder = tmp % 10;
            ret = remainder + ret * 10;
            tmp = tmp / 10;
        }
        if(x < 0){ 
            ret = 0 - ret; 
            if(ret < INT_MIN) ret = 0;
        }
        else
            if(ret > INT_MAX) ret = 0;
        return ret;
    }
};
