class Solution {
public:
    int getSum(int n){
        int remainder, sum = 0; 
        remainder = n % 10;
        sum += pow(remainder, 2);
        n = n / 10;
        while(n != 0){
            remainder = n % 10;
            sum += pow(remainder, 2);
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        map<int, int> A;
        A.insert(std::pair<int, int>(n , 1));
        while(n != 1){
            n = getSum(n);
            if(A.find(n) != A.end())
                break;
            else A.insert(std::pair<int, int>(n , 1));
            
        }
        if(n == 1) return true;
        return false;
    }
};
