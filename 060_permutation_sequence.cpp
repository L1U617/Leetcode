class Solution {
public:
    int Factorial(int n){
        if(n == 1) return 1;
        if(n == 0) return 1;
        return n * Factorial(n - 1);
    }
    string getPermutation(int n, int k) {
        string ret;
        vector<int> A(n + 1, 0);
        int remainder = k, num;
        int pmt = Factorial(n - 1);
        int i, j, cnt = 0;
        for(i = 1; i <= n - 1; i++){               
            if(remainder % pmt == 0){
                num = remainder / pmt;
                remainder = pmt;
            }
            else{
                num = (remainder / pmt) + 1;
                remainder = remainder % pmt;       
            }              

            cnt = 0;
            for(j = 1; j <= n; j++){
                if(A[j] == 0) cnt += 1;
                if(cnt == num) break;
            }            
            A[j] = 1;
            ret.push_back(j + '0'); 
            pmt = pmt / (n - i); 
        }
        for(i = 1; i <= n; i++){
            if(A[i] == 0){
                ret.push_back(i + '0');
                break;
            }
        }
        return ret;
    }
};
